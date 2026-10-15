/*
 * FUN_10005caa at 10005caa
 * int __thiscall FUN_10005caa(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10005caa-10005dc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10005caa(void *this,int param_1,undefined4 param_2)

{
  int *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = *(int *)((int)this + 0x2c);
  if ((((iVar2 == 3) || (iVar2 == 4)) || (iVar5 = 0, iVar2 == 5)) &&
     ((iVar5 = *(int *)((int)this + 4), iVar2 == 3 || (iVar2 == 4)))) {
    cVar1 = (**(code **)(**(int **)this + 0x38))(param_1,iVar5);
    if (cVar1 == '\0') {
      uVar6 = 0;
      bVar7 = *(int *)((int)this + 0xc) == 0;
      if (*(int *)((int)this + 0xc) != 0) {
        do {
          cVar1 = (**(code **)(**(int **)this + 0x38))
                            (param_1,*(undefined4 *)(*(int *)((int)this + 8) + uVar6 * 4));
          if (cVar1 != '\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)((int)this + 0xc));
        bVar7 = uVar6 == *(uint *)((int)this + 0xc);
      }
      if (bVar7) {
        param_1 = (**(code **)(**(int **)this + 0x3c))(param_1,param_2);
        if (param_1 != 0) {
          this_00 = (int *)((int)this + 8);
          if (*(int *)((int)this + 0x14) < 0) {
            uVar3 = *(undefined4 *)((int)this + 4);
          }
          else {
            uVar3 = *(undefined4 *)(*this_00 + *(int *)((int)this + 0x14) * 4);
          }
          (**(code **)(**(int **)this + 0x40))(param_1,uVar3);
          if (0xb < *(uint *)((int)this + 0xc)) {
            (**(code **)(**(int **)*this_00 + 0x10))();
            uVar6 = *(uint *)((int)this + 0xc);
            if (uVar6 != 0) {
              uVar4 = 1;
              if (1 < uVar6) {
                do {
                  *(undefined4 *)(*this_00 + -4 + uVar4 * 4) = *(undefined4 *)(*this_00 + uVar4 * 4)
                  ;
                  uVar4 = uVar4 + 1;
                  uVar6 = *(uint *)((int)this + 0xc);
                } while (uVar4 < uVar6);
              }
              *(uint *)((int)this + 0xc) = uVar6 - 1;
            }
          }
          *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0xc);
          FUN_1000138a(this_00,&param_1);
          iVar5 = param_1;
        }
      }
      else {
        iVar5 = *(int *)(*(int *)((int)this + 8) + uVar6 * 4);
        if (*(int *)((int)this + 0x14) < 0) {
          iVar2 = *(int *)((int)this + 4);
        }
        else {
          iVar2 = *(int *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x14) * 4);
        }
        if (iVar5 != iVar2) {
          (**(code **)(**(int **)this + 0x40))(iVar5,iVar2);
        }
        *(uint *)((int)this + 0x14) = uVar6;
      }
    }
    else {
      FUN_10005b31(this);
    }
  }
  return iVar5;
}

