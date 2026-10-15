/*
 * FUN_18009aaec at 18009aaec
 * char __fastcall FUN_18009aaec(longlong * param_1, longlong * param_2, int param_3, int param_4, undefined4 param_5, undefined8 param_6, int param_7, byte param_8)
 * Address ranges: 18009aaec-18009ac8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18009aaec(longlong *param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5,
                  undefined8 param_6,int param_7,byte param_8)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  int local_100 [4];
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  int local_d8 [12];
  undefined1 local_a8 [28];
  ushort local_8c;
  ushort local_8a;
  undefined1 local_70 [28];
  ushort local_54;
  ushort local_52;
  
  cVar2 = '\0';
  *(undefined1 *)((longlong)param_1 + 0x4d) = 1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x50))(param_2,local_70);
    bVar1 = FUN_180099ff4((longlong)param_1,(uint)local_52,(uint)local_54);
    cVar2 = '\0';
    if (bVar1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_a8);
      local_124 = (uint)param_8 * 4 + 5;
      local_120 = param_5;
      local_118 = 0xffffffff00000000;
      lStack_110 = 0;
      if (param_8 == 0) {
        lStack_110 = (ulonglong)local_8c << 0x20;
      }
      local_108 = 0;
      local_e0 = 0;
      local_d8[6] = 0;
      local_100[1] = 5;
      local_100[2] = 0x1688;
      local_f0 = 0xffffffff00000000;
      lStack_e8 = (ulonglong)local_8c << 0x20;
      local_d8[7] = 5;
      local_d8[0] = param_7;
      local_d8[1] = 4;
      *(int *)(param_1 + 8) = param_3;
      *(int *)((longlong)param_1 + 0x44) = param_4;
      local_d8[8] = 0;
      local_d8[9] = 0;
      local_d8[10] = 0;
      local_d8[0xb] = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_d8[4] = 0;
      local_d8[5] = 0;
      if (param_7 != 0) {
        *(int *)(param_1 + 9) = param_7;
      }
      *(longlong **)((longlong)param_1 + 0x14) = param_2;
      local_128 = param_3;
      local_100[0] = param_4;
      uVar3 = FUN_18009a050(param_1,-(ulonglong)(param_3 != 0) & (ulonglong)&local_128,
                            -(ulonglong)(param_4 != 0) & (ulonglong)local_100,0,
                            -(ulonglong)(param_7 != 0) & (ulonglong)local_d8,(uint)local_8a,
                            (uint)local_8c,'\0');
      cVar2 = (char)uVar3;
      if (cVar2 == '\0') {
        *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      }
      else {
        (**(code **)(**(longlong **)((longlong)param_1 + 0x14) + 8))();
      }
    }
  }
  return cVar2;
}

