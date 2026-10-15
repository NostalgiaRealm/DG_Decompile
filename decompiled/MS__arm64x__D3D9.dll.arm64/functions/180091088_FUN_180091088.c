/*
 * FUN_180091088 at 180091088
 * undefined FUN_180091088(void)
 * Address ranges: 180091088-18009120f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180091088(longlong param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5,
                  undefined8 param_6,int param_7,uint param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  int local_150;
  int iStack_14c;
  undefined4 local_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined8 local_130;
  int local_120 [8];
  int local_100 [4];
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [28];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined1 auStack_80 [28];
  ushort local_64;
  undefined2 local_62;
  
  *(undefined1 *)(param_1 + 0x4d) = 1;
  cVar6 = '\0';
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x50))(param_2,auStack_b8);
    cVar5 = FUN_180090460(param_1,local_9a,local_9c);
    cVar6 = '\0';
    if (cVar5 != '\0') {
      (**(code **)(*param_2 + 0x50))(param_2,auStack_80);
      iStack_14c = (param_8 & 0xff) * 4 + 5;
      local_140 = 0xffffffff00000000;
      if ((param_8 & 1) == 0) {
        uVar4 = (ulonglong)local_64;
      }
      else {
        uVar4 = 0;
      }
      lStack_138 = uVar4 << 0x20;
      local_130 = 0;
      local_100[1] = 5;
      local_100[2] = 0x1688;
      local_d0 = 0x500000000;
      local_f0 = 0xffffffff00000000;
      lStack_e8 = (ulonglong)local_64 << 0x20;
      uStack_c0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_120[1] = 4;
      local_120[2] = 0;
      local_120[3] = 0;
      local_120[4] = 0;
      local_120[5] = 0;
      *(int *)(param_1 + 0x40) = param_3;
      *(int *)(param_1 + 0x44) = param_4;
      if (param_7 != 0) {
        *(int *)(param_1 + 0x48) = param_7;
      }
      piVar1 = local_120;
      *(longlong **)(param_1 + 0x14) = param_2;
      if (param_7 == 0) {
        piVar1 = (int *)0x0;
      }
      piVar2 = local_100;
      if (param_4 == 0) {
        piVar2 = (int *)0x0;
      }
      piVar3 = &local_150;
      if (param_3 == 0) {
        piVar3 = (int *)0x0;
      }
      local_150 = param_3;
      local_148 = param_5;
      local_120[0] = param_7;
      local_100[0] = param_4;
      cVar6 = FUN_1800904b8(param_1,piVar3,piVar2,0,piVar1,local_62,local_64,0);
      if (cVar6 == '\0') {
        *(undefined8 *)(param_1 + 0x14) = 0;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x14) + 8))();
      }
    }
  }
  return cVar6;
}

