/*
 * FUN_18000fd5c at 18000fd5c
 * undefined __fastcall FUN_18000fd5c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000fd5c-18000fe6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000fd5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x3330);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  lVar2 = *(longlong *)(lVar1 + 0x618);
  *(longlong *)(lVar1 + 0x618) = param_1;
  if (lVar2 != param_1) {
    FUN_18000fc88(param_1);
    local_res10[0] = 0x50;
    local_res8[0] = 0;
    FUN_18004f7ec(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),0,param_4,
                  (longlong *)(param_1 + 0x4520),local_res10,local_res8);
    FUN_18004f89c(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),
                  *(longlong *)(param_1 + 0x4528),0x2a);
    iVar4 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
      do {
        puVar3 = *(undefined8 **)(param_1 + 0xd940 + (longlong)iVar4 * 8);
        puVar3[0x624] = 0;
        puVar3[0x625] = 0;
        puVar3[0x626] = 0;
        puVar3[0x627] = 0;
        FUN_180028160(puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
    }
  }
  return;
}

