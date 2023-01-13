;;windows 7 registry colors are saved under
;;HKCU\Control Panel\Desktop\Colors
;;this method of extraction will NOT work

[GetBaseColor]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\Microsoft\Windows\DWM
RegValue=ColorizationColor
onchangeAction=[!UpdateMeasure ScriptConverter]

[ScriptConverter]
measure=script
DynamicVariables=1
ScriptFile="#@#WinColor.lua"
updateDivider=-1
