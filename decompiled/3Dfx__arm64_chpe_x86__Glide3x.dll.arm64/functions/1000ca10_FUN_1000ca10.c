/*
 * FUN_1000ca10 at 1000ca10
 * undefined FUN_1000ca10(void)
 * Address ranges: 1000ca10-1000cacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ca10(undefined8 *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_1[0x1c] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar4 = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  do {
    bVar2 = (&DAT_10099848)[uVar4];
    *(uint *)((int)param_1 + uVar4 * 0x10 + 4) = (uint)bVar2;
    *(int *)(param_1 + uVar4 * 2 + 1) = (int)(char)(&DAT_10099838)[uVar4];
    iVar1 = uVar4 * 0x10;
    uVar4 = uVar4 + 1;
    *(uint *)((int)param_1 + iVar1 + 0xc) = param_2 + (uint)bVar2 * 4;
  } while (uVar4 < 0xe);
  uVar3 = FUN_1000cad0(param_1,param_2,0,0,1);
  return uVar3;
}

