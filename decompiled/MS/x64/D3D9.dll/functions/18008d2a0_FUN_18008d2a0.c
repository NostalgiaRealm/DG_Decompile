/*
 * FUN_18008d2a0 at 18008d2a0
 * undefined __fastcall FUN_18008d2a0(longlong param_1, ulonglong param_2, undefined4 param_3, undefined4 param_4, longlong param_5, uint param_6, uint param_7, uint param_8, uint param_9, undefined8 param_10, undefined8 param_11, longlong * param_12, undefined8 param_13)
 * Address ranges: 18008d2a0-18008d55f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18008d2a0(longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,uint param_6,uint param_7,uint param_8,uint param_9,
                  undefined8 param_10,undefined8 param_11,longlong *param_12,undefined8 param_13)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint in_stack_ffffffffffffef18;
  float local_10d8;
  float local_10d4;
  float local_10d0;
  float local_10cc;
  float local_10c8;
  float local_10c4;
  float local_10c0;
  float local_10bc;
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined4 local_10b0;
  undefined4 local_10ac;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  longlong *local_1090;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined1 local_1068 [16];
  int local_1058;
  float local_1038 [1022];
  undefined8 uStack_40;
  
  uStack_40 = 0x18008d2bd;
  uVar7 = param_2 & 0xffffffff;
  FUN_1800dfe48(*(longlong *)(param_1 + 0x1cf10),param_2,param_1);
  (**(code **)(*param_12 + 0x50))(param_12,local_1068);
  *(undefined8 *)(param_1 + 0x1ce48) = 0;
  *(undefined8 *)(param_1 + 0x1ce84) = 0;
  if (local_1058 == 0x3c) {
    uVar4 = ~-(uint)((&DAT_1800ff0a8)[uVar7] != '\0') & 0x4000 |
            *(uint *)(&DAT_1800ff0e0 + uVar7 * 4) & 0xf | 0x80000010;
    FUN_1800fbea0((undefined1 *)local_1038,0,0x1000);
    if (param_5 != 0) {
      uVar7 = 0;
      do {
        uVar5 = (int)uVar7 * 4;
        bVar2 = *(byte *)(param_5 + 1 + uVar7 * 4);
        local_1038[uVar5] = (float)*(byte *)(param_5 + 2 + uVar7 * 4);
        local_1038[uVar5 + 1] = (float)bVar2;
        local_1038[uVar5 + 2] = (float)*(byte *)(param_5 + uVar7 * 4);
        lVar1 = uVar7 * 4;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        local_1038[uVar5 + 3] = (float)*(byte *)(param_5 + 3 + lVar1);
      } while (uVar6 < 0x100);
    }
    in_stack_ffffffffffffef18 = 0x400;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
    (**(code **)(*plVar3 + 0x180))
              (plVar3,*(undefined8 *)(param_1 + 0x1d0c0),0,0,local_1038,0x400,0x400);
  }
  else if (local_1058 - 0x44U < 2) {
    uVar4 = 0x80004017;
  }
  else if ((local_1058 - 0x46U < 7) && ((0x49U >> (local_1058 - 0x46U & 0x1f) & 1) != 0)) {
    uVar4 = 0x80000016;
  }
  else {
    uVar4 = ~-(uint)((&DAT_1800ff0a8)[uVar7] != '\0') & 0x4000 |
            *(uint *)(&DAT_1800ff0e0 + uVar7 * 4) & 0xf | 0x80000010;
  }
  local_10d8 = (float)param_6;
  local_1098 = 0;
  local_10d4 = (float)param_7;
  local_1090 = param_12;
  local_1080 = 0;
  local_10d0 = (float)param_8;
  local_10cc = (float)param_9;
  local_10a8 = param_10;
  local_10a0 = param_11;
  local_1078 = 0;
  uStack_1070 = 0;
  local_1088 = param_13;
  local_10c8 = local_10d8;
  local_10c4 = local_10d4;
  local_10c0 = local_10d0;
  local_10bc = local_10cc;
  local_10b8 = param_3;
  local_10b4 = param_4;
  local_10b0 = param_3;
  local_10ac = param_4;
  FUN_18008a494(param_1,&local_10d8,6,(uint)param_2,uVar4,'\0',
                in_stack_ffffffffffffef18 & 0xffffff00);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1cf10) + 0x620));
  return;
}

