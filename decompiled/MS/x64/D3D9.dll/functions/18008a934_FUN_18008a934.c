/*
 * FUN_18008a934 at 18008a934
 * byte __fastcall FUN_18008a934(longlong param_1, float * param_2, longlong param_3, longlong param_4)
 * Address ranges: 18008a934-18008aa5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18008a934(longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  uint in_stack_ffffffffffffff88;
  undefined1 local_68 [20];
  int local_54;
  
  plVar3 = *(longlong **)(param_4 + 0x80);
  bVar6 = 1;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_4 + 0x78);
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,local_68);
  bVar1 = 1;
  if (local_54 != 1) {
    if (local_54 == 2) {
      uVar5 = 0x10;
      goto LAB_18008a9a0;
    }
    if (local_54 == 4) {
      uVar5 = 0x11;
      goto LAB_18008a9a0;
    }
    if (local_54 == 8) {
      uVar5 = 0x12;
      goto LAB_18008a9a0;
    }
    if (local_54 == 0x10) {
      uVar5 = 0x13;
      goto LAB_18008a9a0;
    }
    bVar1 = 0;
  }
  bVar6 = bVar1;
  uVar5 = 0xf;
LAB_18008a9a0:
  bVar6 = -(*(longlong *)(param_4 + 0x88) != 0) & bVar6;
  if (bVar6 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_3 + 0x78);
    }
    uVar2 = (ulonglong)(uint)(*(int *)(param_3 + 0x3c) * (int)param_2[9] + (int)param_2[8]);
    if (*(longlong *)(*(longlong *)(param_3 + 0x90) + 8 + uVar2 * 0x28) == 0) {
      bVar6 = 0;
    }
    else {
      *(longlong *)(param_2 + 0x18) = lVar4;
      *(undefined8 *)(param_2 + 0x1a) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x90) + 8 + uVar2 * 0x28);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_4 + 0x88);
      FUN_18008a494(param_1,param_2,*(uint *)(param_3 + 0x2c),*(uint *)(param_4 + 0x2c),uVar5,'\0',
                    in_stack_ffffffffffffff88 & 0xffffff00);
    }
  }
  return bVar6;
}

