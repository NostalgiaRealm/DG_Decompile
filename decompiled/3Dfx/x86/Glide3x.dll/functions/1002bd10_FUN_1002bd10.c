/*
 * FUN_1002bd10 at 1002bd10
 * undefined __thiscall FUN_1002bd10(void * this, byte * param_1, int param_2)
 * Address ranges: 1002bd10-1002be71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002bd10(void *this,byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_10052db2(param_1,&DAT_10054220,0x10);
  if (iVar2 == 0) {
    uVar1 = *(uint *)((int)this + 0x1c);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0x18) + uVar3 * 4) == param_2) {
          if (uVar3 == 0xffffffff) {
            return;
          }
          uVar3 = uVar3 + 1;
          if (uVar3 < uVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x18) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x18) + uVar3 * 4);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)((int)this + 0x1c));
          }
          *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  else {
    iVar2 = FUN_10052db2(param_1,&DAT_10054230,0x10);
    if (iVar2 == 0) {
      uVar1 = *(uint *)((int)this + 0x28);
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(int *)((int)this + 0x24) + uVar3 * 4) == param_2) {
            if (uVar3 == 0xffffffff) {
              return;
            }
            uVar3 = uVar3 + 1;
            if (uVar3 < uVar1) {
              do {
                *(undefined4 *)(*(int *)((int)this + 0x24) + -4 + uVar3 * 4) =
                     *(undefined4 *)(*(int *)((int)this + 0x24) + uVar3 * 4);
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(uint *)((int)this + 0x28));
            }
            *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
            return;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
    }
    else {
      iVar2 = FUN_10052db2(param_1,&DAT_10054240,0x10);
      if (iVar2 == 0) {
        uVar1 = *(uint *)((int)this + 0x34);
        uVar3 = 0;
        if (uVar1 != 0) {
          do {
            if (*(int *)(*(int *)((int)this + 0x30) + uVar3 * 4) == param_2) {
              if (uVar3 == 0xffffffff) {
                return;
              }
              uVar3 = uVar3 + 1;
              if (uVar3 < uVar1) {
                do {
                  *(undefined4 *)(*(int *)((int)this + 0x30) + -4 + uVar3 * 4) =
                       *(undefined4 *)(*(int *)((int)this + 0x30) + uVar3 * 4);
                  uVar3 = uVar3 + 1;
                } while (uVar3 < *(uint *)((int)this + 0x34));
              }
              *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
              return;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar1);
        }
      }
      else {
        iVar2 = FUN_10052db2(param_1,&DAT_10054250,0x10);
        if (iVar2 == 0) {
          uVar1 = *(uint *)((int)this + 0x40);
          uVar3 = 0;
          if (uVar1 != 0) {
            do {
              if (*(int *)(*(int *)((int)this + 0x3c) + uVar3 * 4) == param_2) {
                if (uVar3 == 0xffffffff) {
                  return;
                }
                uVar3 = uVar3 + 1;
                if (uVar3 < uVar1) {
                  do {
                    *(undefined4 *)(*(int *)((int)this + 0x3c) + -4 + uVar3 * 4) =
                         *(undefined4 *)(*(int *)((int)this + 0x3c) + uVar3 * 4);
                    uVar3 = uVar3 + 1;
                  } while (uVar3 < *(uint *)((int)this + 0x40));
                }
                *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -1;
                return;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uVar1);
          }
        }
      }
    }
  }
  return;
}

