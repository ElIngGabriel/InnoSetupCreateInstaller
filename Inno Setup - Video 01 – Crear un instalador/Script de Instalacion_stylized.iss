[Setup]
; Nombre de la aplicacion 
AppName=ElIngGabriel - Proyecto Integrador
; Nombre  de la version de la aplicacion
AppVerName=ElIngGabriel - Proyecto Integrador
; Nombre de la carpeta del menu de incio
DefaultGroupName=ElIngGabriel
; Nombre de la empresa o distribuidor
AppPublisher=ElIngGabriel
; Version de la aplicacion
AppVersion=1.0
; Derechos de autor
AppCopyright=2014 © Copyright 
; Preguntar si se quiere crear acceso directo en el menu de inicio si es false se obliga a crear acceso directo
AllowNoIcons=false
; Requerir privilegios de administrador para instalar
PrivilegesRequired=admin
; Terminos y condiciones de uso del software
LicenseFile = C:\archivos\License.rtf
; Archivo "readme" que se muestra antes de la instalacion
InfoBeforeFile=C:\archivos\Readme.TXT
; Archivo "readme" que se muestra despues de la instalacion
InfoAfterFile=C:\archivos\Start.TXT
; Icono del setup
SetupIconFile = C:\archivos\img\installer.ico
; Icono del desinstalador
UninstallDisplayIcon=C:\archivos\img\uninstaller.ico
; Imagen principal del instaldor
WizardImageFile = C:\archivos\img\Wizard_tutoriales_elinggabriel.bmp
; Imagen miniatura del instalador 
WizardSmallImageFile = C:\archivos\img\logo.bmp
; Este es el nombre del archivo exe que se va a generar
OutputBaseFilename= Proyecto Integrador
OutputDir=C:\archivos\setup\
; Esta es la carpeta de instalación por defecto. OJO: {pf} es una variable propia de
; innosetup y significa la carpeta de Archivos de programa (o Program files si es
; un windows en inglés)
; Dentro de {pf} se crea la carpeta del instalador si existe se pregunta si se decea remplazar
DefaultDirName={pf}\ElIngGabriel


[Languages]
;Lenguaje por default del instalador
Name: "spanish"; MessagesFile: "compiler:Languages\Spanish.isl"

[Tasks]
; Esto no se toca. Es la indicación para innosetup de que debe crear los íconos necesarios
; para iniciar el programa y para desinstalarlo,
; Se pregunta si se decea crear un acceso directo en el escritorio
Name: desktopicon; Description: Crear un acceso directo en el escritorio; GroupDescription: Iconos Adicionales:

[Files]
; OJO: antes que todo. Los parámetros: regserver restartreplace shared file, etc. son
; parámetros que tienen que ir tal y como aparecen acá. Cuesta un poco comprenderlos.
; Por ahora los dejamos tal y como están acá.
; Otra cosa: {sys} = carpeta system de windows
;            {win} = carpeta windows de windows
;            {cf} = carpeta archivos comunes de windows
;            {tmp} = carpeta temporal de windows (una ves terminada la instalacion se borran estos archivos)
;            {app} = carpeta donde se va a instalar el programa (fue definida arriba en el parámetro: DefaultDirName=)
; -------------------------------------------------------------------------------------
; Aquí van los archivos de la aplicación: el .exe y otros que ocupe el programa
; Source: es la fuente donde se encuentra el o los programas a necesitar
; DestDir: es la carpeta donde se copiaran los archivos 
; Flags: son las acciones a realizar con los archivos en este caso tenemos tres tipos diferentes
; -> ignoreversion (remplaza cualquier version dentro de la computadora del software por la que se esta instalando)
Source: C:\archivos\Proyecto_Integrador\Debug\Proyecto_Integrador.exe; DestDir: {app}; Flags: ignoreversion 

[INI]

; Iconos y accesos directos de nuestra aplicacion
[Icons]
; Estos son los íconos que el instalador va a crear en el grupo de programas.
; Aquí se incluye: el ícono para abrir el programa, el ícono para desinstalar el programa
; y el ícono que se ubica en el escritorio
; OJO: {group} = nombre del grupo de programa que se definió arriba en el parámetro: DefaultGroupName=

; Dentro del grupo de programas "group" se crea un acceso directo a la aplicacion principal 
Name: {group}\ElIngGabriel - Proyecto Integrador; Filename: {app}\Proyecto_Integrador.exe; WorkingDir: {app}; IconIndex: 0

; Dentro del grupo de programas "group" se crea un acceso directo al desinstalador
Name: {group}\Desinstalar ElIngGabriel - Proyecto Integrador; Filename: {uninstallexe}; IconIndex: 1

; En el escritorio se crea el acceso directo de la aplicacion principal 
Name: {userdesktop}\Proyecto Integrador; Filename: {app}\Proyecto_Integrador.exe; Tasks: desktopicon; WorkingDir: {app}; IconIndex: 0

; La seccion [Run] son tareas adicionales que se realizan como instalar algun framework, base de datos, procedimientos almacenados, etc
[Run]
; A continuacion empieza la instalacion de programas adicionales a nuestra aplicacion y se utilizan palabras reservadas para realizar dicha  tarea

; Una vez finalizada la instalacion mostramos un mensaje de si se dece ejecutar nuestra aplicacion ya que se instalo
; postinstall Habilita el uso de un checkbox para que el usuario escoja si iniciar o no iniciarlo
; nowait Especifica que no necesita esperar a que termine el programa de instalacion para ejecutarse
; skipifsilent indica que si no esta habilitado el checkbox no ejecute el programa
; unchecked inidica que el checkbox estara deshabilitado por default
Filename: "{app}\Proyecto_Integrador.exe"; Description: "ElIngGabriel - Proyecto Integrador"; Flags: postinstall nowait skipifsilent unchecked

[Messages]
; Aqui se indican los mensajes del wizard que por default vienen en ingles
; WelcomeLabel1 Titulo de la instalacion
; WelcomeLabel2 Descripcion de la instalacion
WelcomeLabel1=Instalación de %nElIngGabriel - Proyecto Integrador
WelcomeLabel2=Este proceso instalará - Proyecto Integrador.%n%nSe recomienda cerrar todas las aplicaciones abiertas%nantes de continuar.%n


