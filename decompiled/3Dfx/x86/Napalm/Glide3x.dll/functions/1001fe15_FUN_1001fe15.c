/*
 * FUN_1001fe15 at 1001fe15
 * undefined __fastcall FUN_1001fe15(int param_1)
 * Address ranges: 1001fe15-1001ff34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001fe15(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      if (*(char *)(param_1 + 0x3659 + local_18) != '\0') {
        iVar1 = param_1 + local_18 * 0x250;
        uVar3 = *(uint *)(iVar1 + 0x2f60);
        local_c = *(uint *)(param_1 + 0x2fb0 + uVar3 * 0x20 + local_18 * 0x250);
        local_8 = local_c;
        if (uVar3 <= *(uint *)(iVar1 + 0x2f5c)) {
          do {
            if (*(uint *)(iVar1 + 0x2fb0 + uVar3 * 0x20) == local_8) {
              lVar5 = FUN_10056570();
              local_8 = local_8 + (int)lVar5;
            }
            else {
              pvVar2 = *(void **)(param_1 + 0x365c);
              uVar4 = 3;
              do {
                FUN_10011993(pvVar2,uVar4,local_c,local_8,0,'\0');
                uVar4 = uVar4 + 1;
              } while (uVar4 < 7);
              local_8 = *(uint *)(iVar1 + 0x2fb0 + uVar3 * 0x20);
              local_c = local_8;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 <= *(uint *)(iVar1 + 0x2f5c));
        }
        pvVar2 = *(void **)(param_1 + 0x365c);
        uVar3 = 3;
        do {
          FUN_10011993(pvVar2,uVar3,local_c,local_8,0,'\0');
          uVar3 = uVar3 + 1;
        } while (uVar3 < 7);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

