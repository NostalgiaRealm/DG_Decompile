/*
 * FUN_1007b27e at 1007b27e
 * undefined4 __thiscall FUN_1007b27e(void * this, int param_1, int param_2)
 * Address ranges: 1007b27e-1007b3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1007b27e(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0x8876086c;
  uStack_8 = this;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*(uint *)((int)this + 0xb0c) >> 2) & 1);
  bVar9 = true;
  piVar8 = (int *)(param_1 + -0x5c);
  if (param_1 == 0) {
    piVar8 = (int *)0x0;
  }
  piVar7 = (int *)(param_2 + -0x5c);
  if (param_2 == 0) {
    piVar7 = (int *)0x0;
  }
  if (piVar8 == (int *)0x0) {
    piVar8 = *(int **)((int)this + 0x18);
  }
  else {
    bVar9 = (void *)piVar8[6] == this;
    if (((*(byte *)(piVar8 + 0xc) & 1) == 0) ||
       ((piVar8[0xd] != 0 && ((piVar8[0xd] != 2 || (*(int *)((int)this + 0xb04) != 3)))))) {
      bVar9 = false;
    }
  }
  if (piVar7 != (int *)0x0) {
    if (((*(byte *)(piVar7 + 0xc) & 2) == 0) || (piVar7[0xd] != 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    bVar4 = 0;
    if (piVar8[0xf] == piVar7[0xf]) {
      bVar4 = bVar5;
    }
    bVar3 = false;
    if ((void *)piVar7[6] == this) {
      bVar3 = bVar9;
    }
    bVar9 = (bool)(bVar4 & bVar3);
    if ((*(byte *)(piVar7[1] + 0xb8) & 1) != (*(byte *)(piVar8[1] + 0xb8) & 1)) {
      piVar7 = (int *)0x0;
    }
  }
  if (bVar9) {
    piVar1 = *(int **)((int)this + 0x18);
    piVar2 = *(int **)((int)this + 0x28);
    *(byte *)((int)this + 0xa00) = *(byte *)((int)this + 0xa00) | piVar8[7] != 0;
    uVar6 = FUN_1001583d(this,(int)piVar8,piVar7,'\x01');
    if ((char)uVar6 != '\0') {
      (**(code **)(*piVar8 + 0x18))();
      if ((int *)piVar8[7] != (int *)0x0) {
        (**(code **)(*(int *)piVar8[7] + 4))();
      }
      if (piVar1 != (int *)0x0) {
        FUN_10005800(piVar1);
      }
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x18))();
        if ((int *)piVar7[7] != (int *)0x0) {
          (**(code **)(*(int *)piVar7[7] + 4))();
        }
        if ((*(int *)(piVar7[1] + 0x60) != -1) && (piVar7[7] != 0)) {
          *(undefined1 *)(piVar7[7] + 0x32) = 1;
        }
      }
      if (piVar2 != (int *)0x0) {
        FUN_10005800(piVar2);
      }
      local_c = 0;
    }
  }
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return local_c;
}

