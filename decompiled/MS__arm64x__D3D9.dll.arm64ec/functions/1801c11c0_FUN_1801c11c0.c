/*
 * FUN_1801c11c0 at 1801c11c0
 * undefined FUN_1801c11c0(void)
 * Address ranges: 1801c11c0-1801c12ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801c11c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if ((DAT_1802588e8 == 0) &&
     (DAT_1802588e8 = FUN_1801bb848(s_Direct3DShaderValidatorCreate9_18022e220), DAT_1802588e8 == 0)
     ) {
    if (DAT_18024d93c == '\0') {
      FUN_1802229d8(DAT_18024e830);
      DAT_18024e830 = 0;
      _DAT_18024e838 = 0;
      FUN_1802229d8(0);
      DAT_18024d93c = '\x01';
    }
    puVar2 = (undefined8 *)FUN_1802229a8(0x20);
    uVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = puVar2;
      *puVar2 = &PTR_FUN_18022eda8;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      iVar1 = FUN_1801de040(puVar2,&DAT_18022ed98,local_30);
      uVar3 = local_30[0];
      if (iVar1 < 0) {
        *puVar2 = &PTR_FUN_18022eda8;
        FUN_1802229d8(puVar2,0x20);
        uVar3 = local_30[0];
      }
    }
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar3 = (*extraout_x11)();
  }
  return uVar3;
}

