/*
 * FUN_180083da8 at 180083da8
 * undefined FUN_180083da8(void)
 * Address ranges: 180083da8-180083e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180083da8(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3);
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x148) + uVar3 * 0x28;
      (*__imp_USER32_dll_UnionRect)
                (lVar1 + 0x18,lVar1 + 0x18,*(longlong *)(param_1 + 0xd0) + uVar3 * 0x28 + 0x18);
    }
    uVar2 = FUN_180083b10(param_1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xb8),
                          param_2,param_3,*(longlong *)(param_1 + 0xd0) + uVar3 * 0x28 + 0x18);
  }
  return uVar2;
}

