/*
 * FUN_1002b89c at 1002b89c
 * undefined4 __thiscall FUN_1002b89c(void * this, int * param_1, int param_2)
 * Address ranges: 1002b89c-1002ba88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b89c(void *this,int *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_2 + 0x1b8) & 100;
  if (((((*(int *)((int)this + 0x15c) == *(int *)(param_2 + 0x15c)) &&
        (*(int *)((int)this + 0x158) == *(int *)(param_2 + 0x158))) &&
       (uVar3 = FUN_10031a59((uint *)((int)this + 0x198),(uint *)(param_2 + 0x198),0),
       (char)uVar3 != '\0')) && ((uVar6 == 4 || (uVar6 == 0x40)))) &&
     (*(int *)(param_2 + 0x110) == 0)) {
    uVar6 = FUN_10005047();
    uVar7 = uVar6 & 0xff;
    if ((char)uVar6 == '\0') {
      return 0x8876000a;
    }
    uVar3 = FUN_10025390(*(int *)((int)this + 0xfc));
    if (((*(uint *)((int)this + 0x1b8) & 0x2001) == 0) ||
       ((*(uint *)(param_2 + 0x1b8) & 0x2001) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((char)uVar3 == '\0') || (bVar1)) {
      if (bVar1) {
        *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x2000;
      }
      if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x50) + 4) != 2) {
        bVar2 = FUN_10030a50(this,param_2);
        uVar7 = (uint)bVar2;
      }
    }
    if (((*(uint *)((int)this + 0x1b8) & 0x2001) == 0) &&
       ((*(uint *)(param_2 + 0x1b8) & 0x2001) != 0)) {
      uVar7 = (uint)CONCAT11(1,(char)uVar7);
    }
    if (((char)uVar3 == '\0') || ((char)(uVar7 >> 8) != '\0')) {
      if ((char)uVar7 == '\0') {
        return 0x8876000a;
      }
      iVar4 = FUN_1002b7cf((int)this);
      if (iVar4 == 0) goto LAB_1002b9e7;
      do {
        if ((char)(uVar7 >> 8) != '\0') {
          *(uint *)(iVar4 + 0x1b8) = *(uint *)(iVar4 + 0x1b8) | 0x2000;
        }
        bVar2 = FUN_10030a50(this,iVar4);
        iVar4 = *(int *)(iVar4 + 0x110);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),(byte)uVar7 & bVar2);
      } while (iVar4 != 0);
    }
    if ((char)uVar7 != '\0') {
LAB_1002b9e7:
      *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)((int)this + 0x110);
      *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)((int)this + 0x114);
      if (*(int *)((int)this + 0x110) != 0) {
        *(int *)(*(int *)((int)this + 0x110) + 0x10c) = param_2;
      }
      *(int *)((int)this + 0x110) = param_2;
      *(int **)((int)this + 0x114) = param_1;
      (**(code **)(*param_1 + 4))(param_1);
      *(void **)(param_2 + 0x10c) = this;
      *(undefined1 *)(param_2 + 0x32) = 1;
      iVar4 = FUN_1002b7cf((int)this);
      if ((*(byte *)(iVar4 + 0x1b8) & 8) != 0) {
        *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + 1;
      }
      iVar5 = 0;
      do {
        uVar6 = *(uint *)(iVar4 + 0x1b8);
        if (iVar5 == 0) {
          uVar6 = uVar6 | 0x30;
        }
        else if (iVar5 == 1) {
          uVar6 = uVar6 | 0x14;
        }
        else {
          uVar6 = uVar6 & 0xffffffdb | 0x10;
        }
        *(uint *)(iVar4 + 0x1b8) = uVar6;
        iVar5 = iVar5 + 1;
        iVar4 = *(int *)(iVar4 + 0x110);
      } while (iVar4 != 0);
      return 0;
    }
  }
  return 0x8876000a;
}

