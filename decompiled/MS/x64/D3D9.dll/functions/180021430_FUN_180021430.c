/*
 * FUN_180021430 at 180021430
 * undefined __fastcall FUN_180021430(undefined8 param_1, longlong * param_2, longlong param_3, longlong param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 180021430-18002152d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021430(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  uint param_5,int param_6,int param_7)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  
  cVar1 = *(char *)(param_3 + 1);
  uVar2 = (ulonglong)param_5;
  puVar3 = (undefined8 *)(param_4 + (ulonglong)*(byte *)(param_3 + 3) * 4);
  puVar4 = (uint *)((ulonglong)(uint)(param_7 * (int)param_2[1]) + *param_2);
  if (cVar1 == '\x01') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      uVar5 = FUN_18002c7c8(puVar4,(uint)*(byte *)((longlong)param_2 + 0xc));
      *(undefined4 *)puVar3 = uVar5;
      puVar3 = (undefined8 *)((longlong)puVar3 + uVar2);
      puVar4 = (uint *)((longlong)puVar4 + (ulonglong)*(uint *)(param_2 + 1));
    }
  }
  else if (cVar1 == '\x02') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      uVar6 = FUN_18002c7c8(puVar4,(uint)*(byte *)((longlong)param_2 + 0xc));
      *puVar3 = uVar6;
      puVar3 = (undefined8 *)((longlong)puVar3 + uVar2);
      puVar4 = (uint *)((longlong)puVar4 + (ulonglong)*(uint *)(param_2 + 1));
    }
  }
  else if (cVar1 == '\x03') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      uVar6 = FUN_18002c7c8(puVar4,(uint)*(byte *)((longlong)param_2 + 0xc));
      *puVar3 = uVar6;
      *(undefined4 *)(puVar3 + 1) = extraout_XMM0_Dc_00;
      puVar3 = (undefined8 *)((longlong)puVar3 + uVar2);
      puVar4 = (uint *)((longlong)puVar4 + (ulonglong)*(uint *)(param_2 + 1));
    }
  }
  else if ((cVar1 == '\x04') && (param_6 != 0)) {
    do {
      uVar6 = FUN_18002c7c8(puVar4,(uint)*(byte *)((longlong)param_2 + 0xc));
      *puVar3 = uVar6;
      *(undefined4 *)(puVar3 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar3 + 0xc) = extraout_XMM0_Dd;
      puVar3 = (undefined8 *)((longlong)puVar3 + (ulonglong)param_5);
      puVar4 = (uint *)((longlong)puVar4 + (ulonglong)*(uint *)(param_2 + 1));
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

