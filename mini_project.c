TestReflexe:
 Clr PortC:#bLed
 Call Attente ;attente15secondes
 Set PortC:#bLed
 Clr PortD
AtPous: Call Del20ms
 Inc PortD;Duréeenmultiplede20ms
 TestSkip,BSPortC:#bPous
 Jump AtPous
Fini:Jump Fini ;JumpAPCidem,carAPC=adressedel’instruction

