/*
 * FUN_10026aeb at 10026aeb
 * undefined __fastcall FUN_10026aeb(int param_1)
 * Address ranges: 10026aeb-10026bb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10026aeb(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  uint uVar5;
  uint uVar6;
  ulonglong local_30 [3];
  void *local_14;
  uint local_10;
  int local_c;
  char local_5;
  
  local_10 = 0;
  uVar3 = DAT_1006c23c;
  local_c = param_1;
  if (DAT_1006c23c != 0) {
    do {
      uVar6 = local_10;
      iVar1 = *(int *)(DAT_1006c24c + local_10 * 4);
      if (*(int *)(param_1 + 0x11c) == *(int *)(iVar1 + 0x11c)) {
        uVar3 = FUN_10024c50(iVar1);
        iVar2 = local_c;
        uVar5 = 0;
        local_5 = (char)uVar3;
        param_1 = local_c;
        uVar3 = extraout_EDX;
        if (*(int *)(iVar1 + 300) != 0) {
          do {
            iVar4 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x128) + uVar5 * 4) + 0x38))();
            if (((*(uint *)(iVar4 + 0x68) & 0x800) == 0) &&
               ((*(uint *)(iVar4 + 0x6c) & 0x20010) == 0)) {
              local_14 = *(void **)(*(int *)(iVar1 + 0x128) + uVar5 * 4);
              FUN_1002a110(local_14,local_30);
              uVar3 = FUN_100030bf(*(int *)(iVar2 + 0x11c),(uint *)local_30);
              if (((char)uVar3 == '\0') || (local_5 == '\0')) {
                FUN_10033228(local_14);
              }
            }
            uVar5 = uVar5 + 1;
            param_1 = local_c;
            uVar3 = DAT_1006c23c;
            uVar6 = local_10;
          } while (uVar5 < *(uint *)(iVar1 + 300));
        }
      }
      local_10 = uVar6 + 1;
    } while (local_10 < uVar3);
  }
  return;
}

