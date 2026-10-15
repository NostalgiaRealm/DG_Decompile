/*
 * FUN_18005be38 at 18005be38
 * undefined FUN_18005be38(void)
 * Address ranges: 18005be38-18005beaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005be38(longlong *param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  uVar2 = param_3 - param_2 & 0x3fffffff;
  uVar1 = uVar2 << 1;
  puVar3 = (undefined8 *)((longlong)param_1 + (ulonglong)(uint)(param_2 << 2) * 4 + 0x1070);
  while (uVar2 != 0) {
    *puVar3 = *param_4;
    uVar1 = uVar1 - 1;
    puVar3 = puVar3 + 1;
    param_4 = param_4 + 1;
    uVar2 = uVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b5) = 1;
  return;
}

