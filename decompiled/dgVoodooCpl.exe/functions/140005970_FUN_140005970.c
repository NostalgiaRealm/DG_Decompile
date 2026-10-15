/*
 * FUN_140005970 at 140005970
 * char __fastcall FUN_140005970(undefined8 param_1, byte * param_2, int * param_3, uint * param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 140005970-140005b0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_140005970(undefined8 param_1,byte *param_2,int *param_3,uint *param_4,undefined4 *param_5,
                  undefined4 *param_6)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 local_res8;
  byte local_1a8 [128];
  byte local_128 [128];
  byte local_a8 [128];
  
  uVar4 = 0;
  cVar3 = '\0';
  if (*param_2 == 0) {
    bVar2 = 0;
  }
  else {
    do {
      bVar2 = *param_2;
      if (bVar2 == 0x2c) goto LAB_1400059c4;
      param_2 = param_2 + 1;
      local_1a8[uVar4] = bVar2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (*param_2 != 0);
    bVar2 = 0;
  }
LAB_1400059c4:
  local_1a8[uVar4] = 0;
  local_res8 = param_1;
  if (bVar2 == 0x2c) {
    uVar4 = 0;
    while (param_2 = param_2 + 1, *param_2 != 0) {
      local_128[uVar4] = *param_2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
    local_128[uVar4] = 0;
    cVar5 = '\x02';
  }
  else {
    cVar5 = (int)uVar4 != 0;
    if ((int)uVar4 == 0) goto LAB_140005a68;
  }
  iVar1 = FUN_1400242b4(local_1a8,(byte *)" %d_%d %c",param_3,param_4);
  if (iVar1 == 2) {
    *param_4 = *param_4 | *param_3 << 0x10;
    *param_3 = -1;
    cVar3 = '\x01';
  }
  else {
    iVar1 = FUN_1400242b4(local_1a8,(byte *)" ( %d | %d ) %c",param_3,param_4);
    if (iVar1 == 2) {
      cVar3 = '\x01';
    }
  }
LAB_140005a68:
  *param_6 = 0xffffffff;
  *param_5 = 0xffffffff;
  if ((cVar3 != '\0') && (cVar5 == '\x02')) {
    iVar1 = FUN_1400242b4(local_128,(byte *)" pos:%s %c",local_a8,&local_res8);
    if ((iVar1 == 1) && (iVar1 = FUN_140024ce8(local_a8,(byte *)"centered"), iVar1 == 0)) {
      *param_6 = 0xffffffff;
      *param_5 = 0xffffffff;
      return cVar3;
    }
    iVar1 = FUN_1400242b4(local_128,(byte *)" pos:(%d|%d) %c",param_5,param_6);
    if (iVar1 != 2) {
      cVar3 = '\0';
    }
  }
  return cVar3;
}

