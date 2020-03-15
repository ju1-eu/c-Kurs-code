<#----------------------------------------------------------------------
	PS-Script: ju 6-Mrz-20 alle-c-files.ps1
  
	Editor - Visual Studio Code 
	
	- akt. PowerShell: https://github.com/PowerShell/PowerShell/releases
  - Version: $PSVersionTable
	- Shell öffnen: file Auswahl   < Alt + Strg + O >
	- mehrfaches Editieren         < Alt + Mausklick >
	- Einzug: 2 (Leerzeichen), Codierung: UTF-8, Zeilenende: LF (Linux)
	
	Git
	
		git init
		git add .
		git commit -am "Projekt start"
		git commit -a
		# letzten Commit rueckgaengig machen
		git commit --amend 

		# github 
		$thema   = "C-Komplettkurs" # Repository
		$ADRESSE = "https://github.com/ju1-eu"
		git remote add origin $ADRESSE/${thema}.git
		git push --set-upstream origin master

		git pull
		git push

		git st
		git lg
----------------------------------------------------------------------#>

Clear-Host # cls

# Zeit
#$timestampArchiv = Get-Date -Format 'yyyy-MMM-dd' # 2018-Okt-11
#$timestampArchiv = Get-Date -Format 'yMd'         # 181011
#$timestampFile = Get-Date -Format 'dd-MMM-yyyy'   # 11-Okt-2018
$timestampFile = Get-Date -Format 'd-MMM-y'        # 11-Okt-18

# Projekt anpassen
$save = "alle-c-files.txt" 
$file = "ju $timestampFile $save`n`n"
$info = "**PS-Script** speichert alle C/C++ files in die Datei `"$save`".`n`n"
$info

$file += "in Makefile speichern:`n"
$file += "#----------------------`n`n"
$file += "TARGETS=\`n"
$file | Out-File "$save" -Encoding UTF8 

# make - TARGETS=\
# c files
$filter = "*.c"
[array]$array = ls ./ $filter 
# array auslesen
for($n=0; $n -lt $array.length; $n++){   # kleiner
  #$name = "$($array[$n])"               # file.tex
  $basename = "$($array.BaseName[$n])"   # file
  #"$n - $name"
  # Schleife überspringen
  if($basename -eq "bib"){# -eq gleich 
    continue # break und continue
  }
  # schreibe in datei 
  $file += "	$basename.exe \`n"
  $file | Out-File "$save" -Encoding UTF8  
} 

# c++ files
$filter = "*.cpp"
[array]$array = ls ./ $filter 
# array auslesen
for($n=0; $n -lt $array.length; $n++){   # kleiner
  #$name = "$($array[$n])"               # file.tex
  $basename = "$($array.BaseName[$n])"   # file
  #"$n - $name"
  # Schleife überspringen
  if($basename -eq "bib"){# -eq gleich 
    continue # break und continue
  }
  # schreibe in datei 
  $file += "	$basename.exe \`n"
  $file | Out-File "$save" -Encoding UTF8  
}

# trenner
$file += "#-----------------------`n"
$file += "`nclean:`n"
$file | Out-File "$save" -Encoding UTF8  

# make - clean:
# c files
$filter = "*.c"
[array]$array = ls ./ $filter 
# array auslesen
for($n=0; $n -lt $array.length; $n++){   # kleiner
  #$name = "$($array[$n])"               # file.tex
  $basename = "$($array.BaseName[$n])"   # file
  #"$n - $name"
  # Schleife überspringen
  if($basename -eq "bib"){# -eq gleich 
    continue # break und continue
  }
  # schreibe in datei 
  $file += "	rm $basename.exe `n"
  $file | Out-File "$save" -Encoding UTF8  
} 

# c++ files
$filter = "*.cpp"
[array]$array = ls ./ $filter 
# array auslesen
for($n=0; $n -lt $array.length; $n++){   # kleiner
  #$name = "$($array[$n])"               # file.tex
  $basename = "$($array.BaseName[$n])"   # file
  #"$n - $name"
  # Schleife überspringen
  if($basename -eq "bib"){# -eq gleich 
    continue # break und continue
  }
  # schreibe in datei 
  $file += "	rm $basename.exe`n"
  $file | Out-File "$save" -Encoding UTF8  
}

# abschluss
$file += "#-----------------------`n"
$file | Out-File "$save" -Encoding UTF8  

