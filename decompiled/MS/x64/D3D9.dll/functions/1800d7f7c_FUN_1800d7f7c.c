/*
 * FUN_1800d7f7c at 1800d7f7c
 * undefined __fastcall FUN_1800d7f7c(undefined8 * param_1, undefined4 * param_2)
 * Address ranges: 1800d7f7c-1800d819a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d7f7c(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_218 [66];
  
  FUN_1800fbea0((undefined1 *)local_218,0,0x20c);
  puVar3 = FUN_1800c9fcc(local_218);
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
  *(undefined4 *)(param_1 + 0xf) =
       *(undefined4 *)
        (&DAT_180106028 +
        ((ulonglong)(-(uint)(*(char *)(param_2 + 0x1d) != '\0') & 2) +
        (ulonglong)(*(char *)((longlong)param_2 + 0x73) != '\0')) * 4);
  return;
}

