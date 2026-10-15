/*
 * FUN_100208d8 at 100208d8
 * undefined FUN_100208d8(void)
 * Address ranges: 100208d8-10020997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100208d8(int param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_2 + 0xb0);
  piVar2 = (int *)(param_1 + 0x138);
  if ((*plVar1 == 0) ||
     (uVar3 = FUN_10068fa0(*(int *)(*(int *)(*piVar2 + 0x3688) + 0x1304) + 4,0), (uVar3 & 1) == 0))
  {
    FUN_10062e18(*(undefined4 *)(*(int *)(*piVar2 + 0x3680) + 0x172c0),
                 *(undefined4 *)(param_2 + (param_3 & 0xff) * 0x20 + 0xe4));
  }
  else {
    FUN_100696f0(*(undefined4 *)(*(int *)(*piVar2 + 0x3688) + 0x1304),*plVar1);
    *plVar1 = 0;
  }
  return;
}

