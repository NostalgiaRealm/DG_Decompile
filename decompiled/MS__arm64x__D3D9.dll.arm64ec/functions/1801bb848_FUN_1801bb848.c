/*
 * FUN_1801bb848 at 1801bb848
 * undefined FUN_1801bb848(void)
 * Address ranges: 1801bb848-1801bb947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801bb848(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_240;
  undefined1 auStack_238 [520];
  
  iVar1 = thunk_FUN_1802236e4(DAT_180258900);
  if (iVar1 == 0) {
    FUN_1801085c8();
  }
  if (DAT_1802588f8 == '\0') {
    lVar2 = FUN_18021f2d0();
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x880) != '\0') {
        local_240 = 0;
        thunk_FUN_1802243dc(&DAT_180229428,0,0,&local_240);
        if (local_240 != 0) {
          FUN_180223210(auStack_238);
          thunk_FUN_18022366c(auStack_238,u_D3D9_DLL_18022e1d0);
          DAT_1802588f0 = thunk_FUN_180223914(auStack_238);
          thunk_FUN_180224404(local_240);
        }
      }
      if (DAT_1802588c0 == '\0') {
        DAT_1802588c0 = '\x01';
      }
      FUN_18021fa28(lVar2);
    }
    DAT_1802588f8 = '\x01';
  }
  uVar3 = 0;
  if (DAT_1802588f0 != 0) {
    uVar3 = thunk_FUN_180223928(DAT_1802588f0,param_1);
  }
  thunk_FUN_18022370c(DAT_180258900);
  return uVar3;
}

