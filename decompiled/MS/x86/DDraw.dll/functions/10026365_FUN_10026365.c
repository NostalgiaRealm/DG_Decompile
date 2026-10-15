/*
 * FUN_10026365 at 10026365
 * undefined4 __thiscall FUN_10026365(void * this, int * param_1, int * param_2)
 * Address ranges: 10026365-10026503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10026365(void *this,int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar4 = param_1;
  uVar6 = 0x80070057;
  bVar1 = true;
  bVar3 = true;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0xac)) && (*param_1 != 0x13c)) &&
     ((*param_1 != 0x16c && (bVar1 = true, *param_1 != 0x17c)))) {
    bVar1 = false;
  }
  bVar2 = true;
  if (((param_2 != (int *)0x0) && (bVar2 = bVar3, *param_2 != 0xac)) &&
     ((*param_2 != 0x13c && ((*param_2 != 0x16c && (*param_2 != 0x17c)))))) {
    bVar2 = false;
  }
  if ((bVar1) && (bVar2)) {
    iVar7 = -1;
    iVar5 = *(int *)((int)this + 0x11c) * 0x228;
    if (*(int *)(&DAT_1006c4a4 + iVar5) == 0) {
      param_1 = *(int **)(&DAT_1006c4a0 + iVar5);
    }
    else {
      param_1 = (int *)0xffffffff;
    }
    if (*(int *)(&DAT_1006c4ac + iVar5) == 0) {
      iVar7 = *(int *)(&DAT_1006c4a8 + iVar5);
    }
    if (piVar4 != (int *)0x0) {
      if (*piVar4 == 0xac) {
        FUN_100235a9(&DAT_1006b458 + *(int *)((int)this + 0x40) * 0x1a8,piVar4);
      }
      else if (*piVar4 == 0x13c) {
        FUN_100236c7(&DAT_1006b458 + *(int *)((int)this + 0x40) * 0x1a8,piVar4);
      }
      else if (*piVar4 == 0x16c) {
        FUN_10023796(&DAT_1006b458 + *(int *)((int)this + 0x40) * 0x1a8,piVar4);
      }
      else if (*piVar4 == 0x17c) {
        FUN_10023828(&DAT_1006b458 + *(int *)((int)this + 0x40) * 0x1a8,piVar4);
      }
      piVar4[0xf] = (int)param_1;
      piVar4[0x10] = iVar7;
    }
    if (param_2 != (int *)0x0) {
      if (*param_2 == 0xac) {
        FUN_100235a9(&DAT_1006b458,param_2);
      }
      else if (*param_2 == 0x13c) {
        FUN_100236c7(&DAT_1006b458,param_2);
      }
      else if (*param_2 == 0x16c) {
        FUN_10023796(&DAT_1006b458,param_2);
      }
      else if (*param_2 == 0x17c) {
        FUN_10023828(&DAT_1006b458,param_2);
      }
      param_2[0xf] = (int)param_1;
      param_2[0x10] = iVar7;
    }
    uVar6 = 0;
  }
  return uVar6;
}

