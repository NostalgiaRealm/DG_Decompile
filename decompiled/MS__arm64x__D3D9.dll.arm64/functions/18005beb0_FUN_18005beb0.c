/*
 * FUN_18005beb0 at 18005beb0
 * undefined FUN_18005beb0(void)
 * Address ranges: 18005beb0-18005bf2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005beb0(longlong *param_1,uint param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  puVar2 = (undefined8 *)((longlong)param_1 + (ulonglong)param_2 * 4 + 0x1170);
  for (uVar1 = param_3 - param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_4;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + 1;
  }
  if ((param_3 - param_2 & 1) != 0) {
    *(undefined4 *)puVar2 = *(undefined4 *)param_4;
  }
  *(undefined1 *)((longlong)param_1 + 0xf6b5) = 1;
  return;
}

