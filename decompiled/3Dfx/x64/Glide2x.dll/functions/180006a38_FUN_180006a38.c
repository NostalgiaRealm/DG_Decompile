/*
 * FUN_180006a38 at 180006a38
 * undefined __fastcall FUN_180006a38(longlong param_1, byte * param_2, longlong param_3)
 * Address ranges: 180006a38-180006bf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006a38(longlong param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar1 = FUN_18005f350(param_2,&DAT_180060468,0x10);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        iVar1 = (int)uVar3;
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8) == param_3) {
          if (iVar1 == -1) {
            return;
          }
          uVar4 = iVar1 + 1;
          if (uVar4 < uVar2) {
            do {
              uVar3 = (ulonglong)uVar4;
              uVar2 = uVar4 - 1;
              uVar4 = uVar4 + 1;
              *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8);
            } while (uVar4 < *(uint *)(param_1 + 0x30));
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
          return;
        }
        uVar3 = (ulonglong)(iVar1 + 1U);
      } while (iVar1 + 1U < uVar2);
    }
  }
  else {
    iVar1 = FUN_18005f350(param_2,&DAT_180060478,0x10);
    if (iVar1 == 0) {
      uVar2 = *(uint *)(param_1 + 0x40);
      if (uVar2 != 0) {
        uVar3 = 0;
        do {
          iVar1 = (int)uVar3;
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + uVar3 * 8) == param_3) {
            if (iVar1 == -1) {
              return;
            }
            uVar4 = iVar1 + 1;
            if (uVar4 < uVar2) {
              do {
                uVar3 = (ulonglong)uVar4;
                uVar2 = uVar4 - 1;
                uVar4 = uVar4 + 1;
                *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar2 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar3 * 8);
              } while (uVar4 < *(uint *)(param_1 + 0x40));
            }
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
            return;
          }
          uVar3 = (ulonglong)(iVar1 + 1U);
        } while (iVar1 + 1U < uVar2);
      }
    }
    else {
      iVar1 = FUN_18005f350(param_2,&DAT_180060488,0x10);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(param_1 + 0x50);
        if (uVar2 != 0) {
          uVar3 = 0;
          do {
            iVar1 = (int)uVar3;
            if (*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8) == param_3) {
              if (iVar1 == -1) {
                return;
              }
              uVar4 = iVar1 + 1;
              if (uVar4 < uVar2) {
                do {
                  uVar3 = (ulonglong)uVar4;
                  uVar2 = uVar4 - 1;
                  uVar4 = uVar4 + 1;
                  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar2 * 8) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8);
                } while (uVar4 < *(uint *)(param_1 + 0x50));
              }
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
              return;
            }
            uVar3 = (ulonglong)(iVar1 + 1U);
          } while (iVar1 + 1U < uVar2);
        }
      }
      else {
        iVar1 = FUN_18005f350(param_2,&DAT_180060498,0x10);
        if ((iVar1 == 0) && (uVar2 = *(uint *)(param_1 + 0x60), uVar2 != 0)) {
          uVar3 = 0;
          do {
            iVar1 = (int)uVar3;
            if (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar3 * 8) == param_3) {
              if (iVar1 == -1) {
                return;
              }
              uVar4 = iVar1 + 1;
              if (uVar4 < uVar2) {
                do {
                  uVar3 = (ulonglong)uVar4;
                  uVar2 = uVar4 - 1;
                  uVar4 = uVar4 + 1;
                  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar2 * 8) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar3 * 8);
                  uVar2 = *(uint *)(param_1 + 0x60);
                } while (uVar4 < uVar2);
              }
              *(uint *)(param_1 + 0x60) = uVar2 - 1;
              return;
            }
            uVar3 = (ulonglong)(iVar1 + 1U);
          } while (iVar1 + 1U < uVar2);
        }
      }
    }
  }
  return;
}

