/*
 * FUN_180039688 at 180039688
 * undefined __cdecl FUN_180039688(longlong param_1, byte * param_2, longlong param_3)
 * Address ranges: 180039688-18003968f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039688(longlong param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar1 = FUN_180063e48(param_2,&DAT_180065440,0x10);
  if (iVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 0x30);
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8) == param_3) {
          if ((int)uVar3 == -1) {
            return;
          }
          while (uVar2 = (int)uVar3 + 1, uVar2 < uVar4) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8);
            uVar3 = (ulonglong)uVar2;
            uVar4 = *(uint *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
          return;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
  }
  else {
    iVar1 = FUN_180063e48(param_2,&DAT_180065450,0x10);
    if (iVar1 == 0) {
      uVar4 = *(uint *)(param_1 + 0x40);
      if (uVar4 != 0) {
        uVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + uVar3 * 8) == param_3) {
            if ((int)uVar3 == -1) {
              return;
            }
            while (uVar2 = (int)uVar3 + 1, uVar2 < uVar4) {
              *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar3 * 8) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar2 * 8);
              uVar3 = (ulonglong)uVar2;
              uVar4 = *(uint *)(param_1 + 0x40);
            }
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
            return;
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < uVar4);
      }
    }
    else {
      iVar1 = FUN_180063e48(param_2,&DAT_180065460,0x10);
      if (iVar1 == 0) {
        uVar4 = *(uint *)(param_1 + 0x50);
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8) == param_3) {
              if ((int)uVar3 == -1) {
                return;
              }
              while (uVar2 = (int)uVar3 + 1, uVar2 < uVar4) {
                *(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar2 * 8);
                uVar3 = (ulonglong)uVar2;
                uVar4 = *(uint *)(param_1 + 0x50);
              }
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
              return;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
          } while (uVar2 < uVar4);
        }
      }
      else {
        iVar1 = FUN_180063e48(param_2,&DAT_180065470,0x10);
        if ((iVar1 == 0) && (uVar4 = *(uint *)(param_1 + 0x60), uVar4 != 0)) {
          uVar3 = 0;
          do {
            iVar1 = (int)uVar3;
            if (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar3 * 8) == param_3) {
              if (iVar1 == -1) {
                return;
              }
              uVar2 = iVar1 + 1;
              if (uVar2 < uVar4) {
                do {
                  uVar4 = uVar2 - 1;
                  uVar3 = (ulonglong)uVar2;
                  uVar2 = uVar2 + 1;
                  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 8) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar3 * 8);
                  uVar4 = *(uint *)(param_1 + 0x60);
                } while (uVar2 < uVar4);
              }
              else {
                uVar4 = *(uint *)(param_1 + 0x60);
              }
              *(uint *)(param_1 + 0x60) = uVar4 - 1;
              return;
            }
            uVar3 = (ulonglong)(iVar1 + 1U);
          } while (iVar1 + 1U < uVar4);
        }
      }
    }
  }
  return;
}

