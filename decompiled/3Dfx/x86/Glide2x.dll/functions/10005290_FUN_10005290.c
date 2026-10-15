/*
 * FUN_10005290 at 10005290
 * undefined __thiscall FUN_10005290(void * this, byte * param_1, int param_2)
 * Address ranges: 10005290-100053f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005290(void *this,byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_100501a2(param_1,&DAT_10051220,0x10);
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
    iVar2 = FUN_100501a2(param_1,&DAT_10051230,0x10);
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
      iVar2 = FUN_100501a2(param_1,&DAT_10051240,0x10);
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
        iVar2 = FUN_100501a2(param_1,&DAT_10051250,0x10);
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

