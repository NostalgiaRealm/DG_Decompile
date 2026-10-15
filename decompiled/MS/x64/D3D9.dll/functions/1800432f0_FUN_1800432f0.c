/*
 * FUN_1800432f0 at 1800432f0
 * undefined __fastcall FUN_1800432f0(longlong param_1, int param_2, undefined8 * param_3, int param_4, uint param_5, uint param_6, char param_7)
 * Address ranges: 1800432f0-180043389
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800432f0(longlong param_1,int param_2,undefined8 *param_3,int param_4,uint param_5,
                  uint param_6,char param_7)

{
  uint uVar1;
  uint uVar2;
  
  FUN_18004c9cc(param_1,param_2,(undefined8 *)*param_3,*(longlong *)(param_1 + 0xf718),
                *(longlong *)(param_1 + 0xf710),*(int *)(param_1 + 0x7c),param_4,param_5,param_6,
                '\x01',param_7);
  uVar1 = *(uint *)(param_3 + 1);
  uVar2 = *(uint *)(param_1 + 0x10180);
  *(uint *)(param_1 + 0x10180) = uVar1;
  *(byte *)(param_1 + 0xf68f) = *(byte *)(param_1 + 0xf68f) | (uVar2 & uVar1) != uVar1;
  *(bool *)(param_1 + 0x10184) = param_6 != 0;
  return;
}

