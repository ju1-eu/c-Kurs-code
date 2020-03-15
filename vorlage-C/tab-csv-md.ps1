<# 
  PS-Script: ju 7-Mrz-20 tab-csv-md.ps1
  Tabellen in Excel und Markdown erstellen
  https://www.tablesgenerator.com/
#>
Clear-Host # cls

$file_md  = "bitweisesODER.md"  # Markdown
$file_csv = "bitweisesODER.csv" # Excel
$timestamp = Get-Date -Format 'd-MMM-y' # 11-Okt-18

$info = "Tabellen in Excel und Markdown erstellen.`n"
$info

# suchen und ersetzen
# Excel:    ;
# Hinweis: Tabellenspalte = zwei Leerzeichen
#(Get-content $file -Encoding UTF8) -replace '  ',';' | Out-File $file_csv -Encoding UTF8
# Markdown: |
(Get-content $file_csv -Encoding UTF8) -replace ';','|' | Out-File $file_md -Encoding UTF8
