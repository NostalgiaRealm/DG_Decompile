/*
 * FUN_1801ef980 at 1801ef980
 * undefined FUN_1801ef980(void)
 * Address ranges: 1801ef980-1801ef9d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801ef980(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  code *extraout_x11;
  
  if (param_6 == 1) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,param_2,param_3,param_4);
    cVar2 = (*extraout_x11)();
    bVar1 = cVar2 != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

