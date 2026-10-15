/*
 * FUN_10011d92 at 10011d92
 * char __thiscall FUN_10011d92(void * this, uint param_1, undefined4 param_2, int param_3, int param_4, char param_5, int param_6, char param_7, undefined1 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 10011d92-10011ec6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10011d92(void *this,uint param_1,undefined4 param_2,int param_3,int param_4,char param_5,
            int param_6,char param_7,undefined1 param_8,undefined4 param_9,undefined4 param_10)

{
  bool bVar1;
  char cVar2;
  void *this_00;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  
  this_00 = (void *)(**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(param_2);
  if (((param_1 & 0x10) == 0) && (*(char *)(*(int *)((int)this + 4) + 0x53) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  piVar7 = (int *)((int)this_00 + 0x54);
  if (((*piVar7 == 0) || (param_7 != '\0')) || (!bVar1)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  uVar5 = param_1 & 1;
  iVar4 = *(int *)((int)this_00 + 0x10);
  if (((uVar5 != 0) || (*(int *)((int)this_00 + 0x68) == 0)) && (param_3 != 0xff)) {
    iVar4 = param_3;
  }
  if ((*(int *)((int)this_00 + 100) == 0) && (*(int *)((int)this_00 + 0x68) == 0)) {
    uVar3 = FUN_10011687(*(void **)((int)this + 0x365c),param_2,iVar4,param_4,param_5,cVar6,param_7,
                         (byte)uVar5 ^ 1,param_8,param_9,param_10);
    cVar2 = (char)uVar3;
  }
  else {
    cVar2 = '\x01';
    if ((uVar5 != 0) &&
       (((iVar4 != *(int *)((int)this_00 + 0x5c) || (param_5 != *(char *)((int)this_00 + 0x7d))) ||
        ((param_4 != *(int *)((int)this_00 + 0x60) && (param_4 != 0xff)))))) {
      cVar2 = '\0';
    }
    cVar6 = *(char *)((int)this_00 + 0x81);
  }
  if (cVar2 != '\0') {
    *(undefined4 *)(param_6 + 0xc) = *(undefined4 *)((int)this_00 + 0x5c);
    *(undefined4 *)(param_6 + 0x10) = *(undefined4 *)((int)this_00 + 0x60);
    if (cVar6 == '\0') {
      piVar7 = (int *)((int)this_00 + 0x6c);
    }
    *(int *)(param_6 + 4) = *piVar7;
    if (cVar6 == '\0') {
      iVar4 = *(int *)((int)this_00 + 0x70);
    }
    else {
      iVar4 = ((uint)(*(char *)((int)this_00 + 0x7c) != '\0') * 2 + 2) *
              *(int *)((int)this_00 + 0x58);
    }
    *(int *)(param_6 + 8) = iVar4;
    *(char *)((int)this_00 + 0x81) = cVar6;
    piVar7 = (int *)((int)this_00 + uVar5 * 4 + 100);
    *piVar7 = *piVar7 + 1;
    FUN_100163c4(this_00,*(int *)((int)this_00 + 0x24));
  }
  return cVar2;
}

