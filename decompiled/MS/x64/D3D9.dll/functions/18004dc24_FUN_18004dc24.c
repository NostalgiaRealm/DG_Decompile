/*
 * FUN_18004dc24 at 18004dc24
 * undefined __fastcall FUN_18004dc24(longlong param_1, char param_2)
 * Address ranges: 18004dc24-18004dda8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004dc24(longlong param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_48 [3];
  undefined4 local_3c;
  
  if (((*(char *)(param_1 + 0xf68d) != '\0') || (*(char *)(param_1 + 0xf6c1) != '\0')) ||
     (param_2 != '\0')) {
    plVar5 = *(longlong **)(param_1 + 0xfcc0);
    plVar1 = (longlong *)(param_1 + 0xfce0);
    if ((plVar5 == (longlong *)0x0) && (plVar5 = (longlong *)*plVar1, plVar5 == (longlong *)0x0)) {
      fVar9 = 1.0;
      fVar8 = 1.0;
    }
    else {
      uVar4 = *(uint *)((longlong)plVar5 + 0x24);
      uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,0);
      uVar2 = *(uint *)(plVar5 + 5);
      fVar9 = (float)uVar3 / (float)uVar4;
      uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,0);
      fVar8 = (float)uVar4 / (float)uVar2;
    }
    piVar6 = (int *)(param_1 + 0xe70);
    fVar7 = (float)*(int *)(param_1 + 0xe6c) * fVar8;
    *piVar6 = (int)((float)*(int *)(param_1 + 0xe60) * fVar9);
    *(int *)(param_1 + 0xe74) = (int)((float)*(int *)(param_1 + 0xe64) * fVar8);
    *(int *)(param_1 + 0xe78) = (int)((float)*(int *)(param_1 + 0xe68) * fVar9);
    *(int *)(param_1 + 0xe7c) = (int)fVar7;
    if (*(int *)(param_1 + 0xfca8) == 0) {
      plVar5 = *(longlong **)(param_1 + 0xfcc0);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)*plVar1;
      }
      local_48[2] = (**(code **)(*plVar5 + 0x40))(fVar7,0);
      plVar5 = *(longlong **)(param_1 + 0xfcc0);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)*plVar1;
      }
      local_3c = (**(code **)(*plVar5 + 0x48))(plVar5,0);
      local_48[0] = 0;
      local_48[1] = 0;
      piVar6 = local_48;
    }
    FUN_1800e3c4c(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),1,(longlong)piVar6);
    *(undefined1 *)(param_1 + 0xf6c1) = 0;
  }
  return;
}

