/*
 * FUN_10034488 at 10034488
 * undefined FUN_10034488(void)
 * Address ranges: 10034488-1003456f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10034488(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  code *extraout_w11;
  ulonglong extraout_x12;
  
  puVar1 = (undefined4 *)FUN_100913c0(0x60);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 9) = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR_FUN_100b2534;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    uVar2 = ZEXT48(puVar1 + 0x12);
    puVar1[0x11] = param_1;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    puVar1[0x16] = 0;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    FUN_10036ed0(puVar1 + 1,&DAT_100b1a30,uVar2);
    FUN_10036ed0(extraout_x12 & 0xffffffff,&DAT_100b18c0,uVar2 & 0xffffffff);
    if (param_1 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1);
    }
  }
  return puVar1;
}

