/*
 * FUN_1000c6f4 at 1000c6f4
 * undefined __fastcall FUN_1000c6f4(int param_1)
 * Address ranges: 1000c6f4-1000c7a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c6f4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  uVar2 = FUN_10046362(*(void **)(param_1 + 0x3300),param_1,param_1);
  if ((char)uVar2 != '\0') {
    FUN_1000c658(param_1);
    iVar3 = *(int *)(param_1 + 0x3ef8);
    local_c = 0x50;
    local_8 = 0;
    FUN_10044351(*(void **)(iVar3 + 0x3300),*(int *)(iVar3 + 0x3304),0,iVar3,
                 (int *)(param_1 + 0x3f18),&local_c,&local_8);
    FUN_100443d7(*(void **)(*(int *)(param_1 + 0x3ef8) + 0x3300),
                 *(int *)(*(int *)(param_1 + 0x3ef8) + 0x3304),*(int *)(param_1 + 0x3f1c),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        puVar1 = *(undefined4 **)(param_1 + 0xd140 + iVar3 * 4);
        puVar1[0xc25] = 0;
        puVar1[0xc26] = 0;
        puVar1[0xc27] = 0;
        puVar1[0xc28] = 0;
        FUN_1001fac0(puVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

