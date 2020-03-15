<#---------------------------------------
  PS-Script: ju 6-Mrz-20 alle-c-files.ps1
---------------------------------------#>

Clear-Host # cls

# Zeit
$timestamp = Get-Date -Format 'd-MMM-y'        # 11-Okt-18

# Projekt anpassen
$save = "alle-c-files.txt" 
$file = "ju $timestamp $save`n`n"
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

