/*
 * FUN_1001908e at 1001908e
 * undefined __fastcall FUN_1001908e(int param_1)
 * Address ranges: 1001908e-10019143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001908e(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  uVar2 = FUN_10043c0a(*(void **)(param_1 + 0x3180),param_1,param_1);
  if ((char)uVar2 != '\0') {
    FUN_10018ff2(param_1);
    iVar3 = *(int *)(param_1 + 0x37bc);
    local_c = 0x3c;
    local_8 = 0;
    FUN_10041bf9(*(void **)(iVar3 + 0x3180),*(int *)(iVar3 + 0x3184),0,iVar3,
                 (int *)(param_1 + 0x37d4),&local_c,&local_8);
    FUN_10041c7f(*(void **)(*(int *)(param_1 + 0x37bc) + 0x3180),
                 *(int *)(*(int *)(param_1 + 0x37bc) + 0x3184),*(int *)(param_1 + 0x37d8),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        puVar1 = *(undefined4 **)(param_1 + 0xc9fc + iVar3 * 4);
        puVar1[0xc25] = 0;
        puVar1[0xc26] = 0;
        puVar1[0xc27] = 0;
        puVar1[0xc28] = 0;
        FUN_1002c1cb(puVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

