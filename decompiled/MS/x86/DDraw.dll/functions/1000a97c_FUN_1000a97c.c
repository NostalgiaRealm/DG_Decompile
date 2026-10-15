/*
 * FUN_1000a97c at 1000a97c
 * bool __thiscall FUN_1000a97c(void * this, uint param_1, uint param_2, int param_3, uint param_4, uint param_5, char param_6)
 * Address ranges: 1000a97c-1000ab5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1000a97c(void *this,uint param_1,uint param_2,int param_3,uint param_4,uint param_5,char param_6
            )

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = (int *)((int)this + 0x14);
  piVar2 = (int *)**(undefined4 **)((int)this + 8);
  *piVar1 = 0;
  bVar3 = FUN_1000a901(this,param_4,param_5);
  if ((bVar3) && (param_1 != 0)) {
    iVar4 = *(int *)((int)this + 0x10);
    if ((iVar4 == 0) || (param_6 == '\0')) {
      iVar4 = *(int *)((int)this + 0xc);
    }
    iVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,iVar4,param_1,piVar1);
    if (iVar4 < 0) {
      bVar3 = false;
    }
  }
  iVar4 = *(int *)((int)this + 0x10);
  if (bVar3 != false) {
    if (((param_2 != 0) || (param_3 != 0)) && (uVar8 = 0, param_5 != 0)) {
      do {
        param_1 = 0;
        if (param_4 != 0) {
          do {
            if (param_2 == 0) {
              if (iVar4 == 0) {
                *(undefined4 *)(param_3 + 0x14) = 1;
                uVar6 = uVar8;
                uVar7 = param_1;
              }
              else {
                uVar6 = 1;
                uVar7 = uVar8;
              }
              *(uint *)(param_3 + 0xc) = uVar7;
              *(uint *)(param_3 + 0x10) = uVar6;
              iVar5 = 0xc;
              if (iVar4 != 0) {
                iVar5 = 0x10;
              }
              iVar5 = (**(code **)(*piVar2 + 0x28))
                                (piVar2,*(undefined4 *)(iVar5 + (int)this),param_3,
                                 *(int *)((int)this + 0x18) + (param_1 + uVar8 * param_4) * 0x1c + 4
                                );
            }
            else {
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x10) = 1;
                uVar6 = uVar8;
                uVar7 = param_1;
              }
              else {
                uVar6 = 1;
                uVar7 = uVar8;
              }
              *(uint *)(param_2 + 8) = uVar7;
              *(uint *)(param_2 + 0xc) = uVar6;
              iVar5 = 0xc;
              if (iVar4 != 0) {
                iVar5 = 0x10;
              }
              iVar5 = (**(code **)(*piVar2 + 0x24))
                                (piVar2,*(undefined4 *)(iVar5 + (int)this),param_2,
                                 (param_1 + uVar8 * param_4) * 0x1c + *(int *)((int)this + 0x18));
            }
            if (iVar5 < 0) {
              bVar3 = false;
              break;
            }
            param_1 = param_1 + 1;
          } while (param_1 < param_4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_5);
    }
    if (bVar3 != false) {
      return bVar3;
    }
  }
  param_2 = 0;
  if (param_5 != 0) {
    do {
      _param_6 = 0;
      if (param_4 != 0) {
        do {
          iVar4 = _param_6 * 0x1c + param_2 * param_4 * 0x1c;
          piVar2 = *(int **)(iVar4 + *(int *)((int)this + 0x18));
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *(undefined4 *)(iVar4 + *(int *)((int)this + 0x18)) = 0;
          }
          _param_6 = _param_6 + 1;
        } while (_param_6 < param_4);
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_5);
  }
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  return false;
}

