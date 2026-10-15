/*
 * FUN_1800149d8 at 1800149d8
 * undefined __fastcall FUN_1800149d8(undefined8 * param_1, undefined4 * param_2)
 * Address ranges: 1800149d8-180014bf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800149d8(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_218 [66];
  
  FUN_18005f374((undefined1 *)local_218,0,0x20c);
  puVar3 = FUN_180003614(local_218);
  lVar5 = 4;
  puVar2 = param_1;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = *(undefined8 *)((longlong)puVar4 + 0x84);
  *(undefined8 *)((longlong)puVar6 + 0x7c) = *(undefined8 *)((longlong)puVar4 + 0x7c);
  *(undefined8 *)((longlong)puVar6 + 0x84) = uVar1;
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
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(*(char *)((longlong)param_2 + 0x17) == '\0');
  *(undefined4 *)((longlong)param_1 + 0x27) = param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x2b) = param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x37) = param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 0x3b) = param_2[0xd];
  *(undefined4 *)((longlong)param_1 + 0x3f) = param_2[0xe];
  *(undefined4 *)((longlong)param_1 + 0x2f) = param_2[0xf];
  *(undefined4 *)((longlong)param_1 + 0x33) = param_2[0x10];
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)(param_2 + 0x11) != '\0') & 0x200;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x57);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)((longlong)param_2 + 0x5e);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x62);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_2 + 0x66);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((longlong)param_2 + 0x7e);
  *(uint *)((longlong)param_1 + 0x7c) = (uint)(*(char *)((longlong)param_2 + 0x7b) != '\0');
  *(ulonglong *)((longlong)param_1 + 0x5c) = (ulonglong)*(uint *)((longlong)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((longlong)param_2 + 0x7e);
  return;
}

