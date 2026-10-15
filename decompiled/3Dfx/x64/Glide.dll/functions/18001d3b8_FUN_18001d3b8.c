/*
 * FUN_18001d3b8 at 18001d3b8
 * undefined __fastcall FUN_18001d3b8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d3b8-18001d4c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d3b8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x31b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  lVar2 = *(longlong *)(lVar1 + 0x618);
  *(longlong *)(lVar1 + 0x618) = param_1;
  if (lVar2 != param_1) {
    FUN_18001d2e4(param_1);
    local_res10[0] = 0x3c;
    local_res8[0] = 0;
    FUN_18004d688(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),0,param_4,
                  (longlong *)(param_1 + 0x3b70),local_res10,local_res8);
    FUN_18004d738(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),
                  *(longlong *)(param_1 + 0x3b78),0x2a);
    iVar4 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
      do {
        puVar3 = *(undefined8 **)(param_1 + 0xcf90 + (longlong)iVar4 * 8);
        puVar3[0x624] = 0;
        puVar3[0x625] = 0;
        puVar3[0x626] = 0;
        puVar3[0x627] = 0;
        FUN_1800359bc(puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
    }
  }
  return;
}

