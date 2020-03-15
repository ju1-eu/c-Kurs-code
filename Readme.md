# Readme

C Kurs - Einstieg in die C Programmierung.

Quelle: Jan Schaffranek (Udemy)

## Notizen neu erstellen

    # Projektordner öffnen
    git clone https://github.com/ju1-eu/Ordnerpaket-Notiz.git notiz
    cd notiz
    "Readme.md" lesen !

## Editor - Visual Studio Code

- akt. PowerShell: <https://github.com/PowerShell/PowerShell/releases>
- Version: \$PSVersionTable
- mehrfaches Editieren `<Alt + Mausklick>` o. `<Strg + Alt + Cursortaste>`
- auto. Code Formatierung `<Shift + Alt + F>`
- Einzug: 2 (Leerzeichen), Codierung: UTF-8, Zeilenende: LF (Linux)

## Versionsverwaltung mit Git

    cd prj
    #git init  # Repository neu erstellen
    git add .
    #git commit -am "Projekt start"
    git commit -a
    # letzten Commit rueckgaengig
    git commit --amend

    # Github - Repository nicht vorhanden?
    # Repository neu anlegen
    $THEMA   = "c-Kurs-code" # Repository
    $ADRESSE = "https://github.com/ju1-eu"
    git remote add origin $ADRESSE/${THEMA}.git
    git push --set-upstream origin master

    # Github - Repository vorhanden?
    # git clone
    $THEMA   = "c-Kurs-code" # Repository
    $ADRESSE = "https://github.com/ju1-eu"
    git clone $ADRESSE/${THEMA}.git

    git pull
    git push

    git st # status
    git lg # log

