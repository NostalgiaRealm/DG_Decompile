/*
 * FUN_10012730 at 10012730
 * undefined __fastcall FUN_10012730(undefined4 param_1, undefined4 * param_2)
 * Address ranges: 10012730-100128f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10012730(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_214 [131];
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_10050561(local_214,0,0x20c);
  puVar1 = FUN_10002675(local_214);
  puVar4 = local_8;
  for (iVar3 = 0x83; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *local_8 = *param_2;
  local_8[1] = param_2[1];
  local_8[2] = param_2[2];
  local_8[3] = param_2[3];
  local_8[4] = param_2[4];
  *(undefined1 *)(local_8 + 8) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((int)local_8 + 0x21) = *(undefined1 *)((int)param_2 + 0x16);
  local_8[6] = param_2[6];
  *(undefined1 *)((int)local_8 + 0x22) = *(undefined1 *)(param_2 + 7);
  local_8[7] = *(undefined4 *)((int)param_2 + 0x1d);
  *(undefined1 *)((int)local_8 + 0x23) = *(undefined1 *)((int)param_2 + 0x21);
  *(uint *)((int)local_8 + 0xbe) = (uint)(*(char *)((int)param_2 + 0x17) == '\0');
  *(undefined4 *)((int)local_8 + 0x27) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined4 *)((int)local_8 + 0x2b) = *(undefined4 *)((int)param_2 + 0x26);
  *(undefined4 *)((int)local_8 + 0x37) = *(undefined4 *)((int)param_2 + 0x2a);
  *(undefined4 *)((int)local_8 + 0x3b) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined4 *)((int)local_8 + 0x3f) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined4 *)((int)local_8 + 0x2f) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)local_8 + 0x33) = *(undefined4 *)((int)param_2 + 0x3a);
  uVar2 = 0;
  if (*(char *)((int)param_2 + 0x3e) != '\0') {
    uVar2 = 0x200;
  }
  *(undefined4 *)((int)local_8 + 0x4b) = uVar2;
  *(undefined1 *)((int)local_8 + 0x4f) = *(undefined1 *)((int)param_2 + 0x3f);
  *(undefined1 *)(local_8 + 0x14) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((int)local_8 + 0x51) = *(undefined1 *)((int)param_2 + 0x41);
  *(undefined1 *)((int)local_8 + 0x52) = *(undefined1 *)((int)param_2 + 0x42);
  *(undefined1 *)((int)local_8 + 0x53) = *(undefined1 *)((int)param_2 + 0x43);
  *(undefined1 *)(local_8 + 0x15) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((int)local_8 + 0x55) = *(undefined1 *)((int)param_2 + 0x45);
  *(undefined1 *)((int)local_8 + 0x56) = *(undefined1 *)((int)param_2 + 0x46);
  *(undefined4 *)((int)local_8 + 0x43) = *(undefined4 *)((int)param_2 + 0x47);
  *(undefined4 *)((int)local_8 + 0x47) = *(undefined4 *)((int)param_2 + 0x4b);
  *(undefined1 *)((int)local_8 + 0x57) = *(undefined1 *)((int)param_2 + 0x4f);
  *(undefined1 *)(local_8 + 0x20) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((int)local_8 + 0x81) = *(undefined1 *)((int)param_2 + 0x51);
  *(undefined1 *)((int)local_8 + 0x82) = *(undefined1 *)((int)param_2 + 0x52);
  *(undefined1 *)((int)local_8 + 0x83) = *(undefined1 *)((int)param_2 + 0x53);
  local_8[0x19] = param_2[0x15];
  local_8[0x1a] = param_2[0x16];
  local_8[0x1b] = param_2[0x17];
  local_8[0x1c] = param_2[0x18];
  local_8[0x1d] = param_2[0x19];
  local_8[0x1f] = (uint)(*(char *)((int)param_2 + 0x75) != '\0');
  local_8[0x17] = param_2[0x1a];
  local_8[0x18] = 0;
  local_8[0x16] = param_2[0x1b];
  *(undefined1 *)(local_8 + 0x21) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((int)local_8 + 0x85) = *(undefined1 *)((int)param_2 + 0x71);
  *(undefined1 *)((int)local_8 + 0x86) = *(undefined1 *)((int)param_2 + 0x72);
  *(undefined1 *)((int)local_8 + 0x87) = 0;
  *(undefined1 *)(local_8 + 0x22) = *(undefined1 *)((int)param_2 + 0x76);
  *(undefined1 *)((int)local_8 + 0x89) = 0;
  if (*(char *)((int)param_2 + 0x77) == '\0') {
    iVar3 = 0;
    if (*(char *)(param_2 + 0x1d) != '\0') {
      iVar3 = 2;
    }
    uVar2 = *(undefined4 *)
             (&DAT_1005353c + (iVar3 + (uint)(*(char *)((int)param_2 + 0x73) != '\0')) * 4);
  }
  else {
    uVar2 = 0x100;
  }
  local_8[0x1e] = uVar2;
  return;
}

