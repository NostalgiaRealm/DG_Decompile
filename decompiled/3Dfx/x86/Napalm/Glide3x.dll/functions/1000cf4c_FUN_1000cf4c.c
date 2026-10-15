/*
 * FUN_1000cf4c at 1000cf4c
 * undefined __fastcall FUN_1000cf4c(int param_1)
 * Address ranges: 1000cf4c-1000d001
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000cf4c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  uVar2 = FUN_1004976b(*(void **)(param_1 + 0x3680),param_1,param_1);
  if ((char)uVar2 != '\0') {
    FUN_1000ceb0(param_1);
    iVar3 = *(int *)(param_1 + 0x4278);
    local_c = 0x50;
    local_8 = 0;
    FUN_1004775a(*(void **)(iVar3 + 0x3680),*(int *)(iVar3 + 0x3684),0,iVar3,
                 (int *)(param_1 + 0x4298),&local_c,&local_8);
    FUN_100477e0(*(void **)(*(int *)(param_1 + 0x4278) + 0x3680),
                 *(int *)(*(int *)(param_1 + 0x4278) + 0x3684),*(int *)(param_1 + 0x429c),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        puVar1 = *(undefined4 **)(param_1 + 0xd4f0 + iVar3 * 4);
        puVar1[0xc29] = 0;
        puVar1[0xc2a] = 0;
        puVar1[0xc2b] = 0;
        puVar1[0xc2c] = 0;
        FUN_1001f6db(puVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

