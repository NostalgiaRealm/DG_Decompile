/*
 * FUN_180014f38 at 180014f38
 * undefined __fastcall FUN_180014f38(undefined8 * param_1, undefined4 * param_2)
 * Address ranges: 180014f38-180015163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014f38(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_218 [66];
  
  FUN_18005f814((undefined1 *)local_218,0,0x20c);
  puVar4 = FUN_180003834(local_218);
  lVar6 = 4;
  puVar2 = param_1;
  do {
    puVar7 = puVar2;
    puVar5 = puVar4;
    uVar1 = puVar5[1];
    *puVar7 = *puVar5;
    puVar7[1] = uVar1;
    uVar1 = puVar5[3];
    puVar7[2] = puVar5[2];
    puVar7[3] = uVar1;
    uVar1 = puVar5[5];
    puVar7[4] = puVar5[4];
    puVar7[5] = uVar1;
    uVar1 = puVar5[7];
    puVar7[6] = puVar5[6];
    puVar7[7] = uVar1;
    uVar1 = puVar5[9];
    puVar7[8] = puVar5[8];
    puVar7[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar7[10] = puVar5[10];
    puVar7[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar7[0xc] = puVar5[0xc];
    puVar7[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar7[0xe] = puVar5[0xe];
    puVar7[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar4 = puVar5 + 0x10;
    puVar2 = puVar7 + 0x10;
  } while (lVar6 != 0);
  uVar1 = *(undefined8 *)((longlong)puVar5 + 0x84);
  *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar5 + 0x7c);
  *(undefined8 *)((longlong)puVar7 + 0x84) = uVar1;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(*(char *)((longlong)param_2 + 0x17) == '\0');
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x3e) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 100) = param_2[0x15];
  *(undefined4 *)(param_1 + 0xd) = param_2[0x16];
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_2[0x17];
  *(undefined4 *)(param_1 + 0xe) = param_2[0x18];
  *(undefined4 *)((longlong)param_1 + 0x74) = param_2[0x19];
  *(uint *)((longlong)param_1 + 0x7c) = (uint)(*(char *)((longlong)param_2 + 0x75) != '\0');
  *(ulonglong *)((longlong)param_1 + 0x5c) = (ulonglong)(uint)param_2[0x1a];
  *(undefined4 *)(param_1 + 0xb) = param_2[0x1b];
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  if (*(char *)((longlong)param_2 + 0x77) == '\0') {
    uVar3 = *(undefined4 *)
             (&DAT_180062ba8 +
             ((ulonglong)(-(uint)(*(char *)(param_2 + 0x1d) != '\0') & 2) +
             (ulonglong)(*(char *)((longlong)param_2 + 0x73) != '\0')) * 4);
  }
  else {
    uVar3 = 0x100;
  }
  *(undefined4 *)(param_1 + 0xf) = uVar3;
  return;
}

