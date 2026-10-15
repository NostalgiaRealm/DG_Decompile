/*
 * FUN_1009e509 at 1009e509
 * undefined __fastcall FUN_1009e509(undefined4 * param_1)
 * Address ranges: 1009e509-1009e597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009e509(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[4] + 0xdd0) >> 2) & 1);
  iVar1 = param_1[4];
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0x6788);
  if (uVar2 != 0) {
    do {
      if (*(undefined4 **)(*(int *)(iVar1 + 0x6784) + uVar3 * 4) == param_1) {
        if (uVar3 != 0xffffffff) {
          uVar3 = uVar3 + 1;
          if (uVar3 < uVar2) {
            do {
              *(undefined4 *)(*(int *)(iVar1 + 0x6784) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x6784) + uVar3 * 4);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)(iVar1 + 0x6788));
          }
          *(int *)(iVar1 + 0x6788) = *(int *)(iVar1 + 0x6788) + -1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  FUN_1009e6a7((int)param_1);
  *param_1 = &PTR_FUN_100d7248;
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

