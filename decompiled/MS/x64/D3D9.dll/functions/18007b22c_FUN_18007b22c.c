/*
 * FUN_18007b22c at 18007b22c
 * undefined __fastcall FUN_18007b22c(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4)
 * Address ranges: 18007b22c-18007b466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b22c(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_2 + 0x280) = 0;
  *(undefined8 *)(param_2 + 0x288) = 0;
  *(undefined8 *)(param_2 + 0x290) = 0;
  *(undefined8 *)(param_2 + 0x298) = 0;
  *(undefined8 *)(param_2 + 0x2a0) = 0;
  *(undefined8 *)(param_2 + 0x2a8) = 0;
  *(undefined4 *)(param_2 + 0x2b0) = 0;
  if ((*(char *)(*(longlong *)(param_2 + 0x10) + 0x4885) != '\0') && (param_4 == 0xffffffff)) {
    param_4 = *(uint *)(param_2 + 0x70);
    *(undefined4 *)(param_2 + 0x60 + (ulonglong)param_4 * 4) = 0xd;
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
  }
  puVar1 = (uint *)(param_2 + 0x20);
  lVar5 = 0;
  do {
    cVar2 = *(char *)(lVar5 + *(longlong *)(param_2 + 0x18));
    uVar3 = (uint)cVar2;
    if (cVar2 < -1) {
LAB_18007b2ba:
      if (-1 < (int)uVar3) {
        if ((int)uVar3 < 1) goto LAB_18007b424;
        if (param_4 == 0xffffffff) {
          uVar4 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
        }
        else {
          uVar4 = param_4 << 0xe | uVar3 | 0x420300;
        }
        *(uint *)(param_2 + 0x280 + (longlong)(int)uVar3 * 4) = uVar4;
        if (*(int *)(param_2 + 0x230) == 0) {
          FUN_1800edbe0(puVar1,param_3,0x36,(ulonglong)uVar4);
        }
        else {
          FUN_1800edbe0(puVar1,param_3,0x36,(ulonglong)(uVar4 | 0x40000000));
        }
      }
    }
    else {
      if (-1 < cVar2) {
        uVar3 = uVar3 + 2;
        goto LAB_18007b2ba;
      }
LAB_18007b424:
      uVar3 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
      *(uint *)(param_2 + 0x280) = uVar3;
      uVar3 = 0;
      if (param_4 != 0xffffffff) {
        uVar3 = param_4 << 0xe | 0x420300;
      }
      *(uint *)(param_2 + 0x27c) = uVar3;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 0xc) {
      return;
    }
  } while( true );
}

