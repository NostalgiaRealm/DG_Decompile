/*
 * FUN_100201eb at 100201eb
 * undefined __fastcall FUN_100201eb(int param_1)
 * Address ranges: 100201eb-1002030a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100201eb(int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      if (*(char *)(param_1 + 0x32d9 + local_18) != '\0') {
        iVar3 = local_18 * 0x1a0 + param_1;
        uVar2 = *(uint *)(iVar3 + 0x2d9c);
        local_c = *(uint *)(param_1 + 0x2df0 + (local_18 * 0xd + uVar2) * 0x20);
        local_8 = local_c;
        if (uVar2 <= *(uint *)(iVar3 + 0x2d98)) {
          do {
            if (*(uint *)(iVar3 + 0x2df0 + uVar2 * 0x20) == local_8) {
              lVar5 = FUN_10053160();
              local_8 = local_8 + (int)lVar5;
            }
            else {
              pvVar1 = *(void **)(param_1 + 0x32dc);
              uVar4 = 3;
              do {
                FUN_10010637(pvVar1,uVar4,local_c,local_8,0,'\0');
                uVar4 = uVar4 + 1;
              } while (uVar4 < 7);
              local_8 = *(uint *)(iVar3 + 0x2df0 + uVar2 * 0x20);
              local_c = local_8;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 <= *(uint *)(iVar3 + 0x2d98));
        }
        pvVar1 = *(void **)(param_1 + 0x32dc);
        uVar2 = 3;
        do {
          FUN_10010637(pvVar1,uVar2,local_c,local_8,0,'\0');
          uVar2 = uVar2 + 1;
        } while (uVar2 < 7);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

