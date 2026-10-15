/*
 * FUN_1008f4d0 at 1008f4d0
 * undefined FUN_1008f4d0(void)
 * Address ranges: 1008f4d0-1008f5ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  
  do {
    while( true ) {
      uVar1 = *param_4 & 0xffff;
      if (uVar1 < 0x30) break;
      if ((uVar1 < 0x31) || (uVar1 == 0x51)) {
        param_4 = param_4 + 6;
      }
      else if (uVar1 == 0xfffe) {
        param_4 = param_4 + (*param_4 >> 0x10) + 1;
      }
      else {
        bVar2 = uVar1 == 0xffff;
LAB_1008f56c:
        if (bVar2) {
          return;
        }
LAB_1008f570:
        param_4 = (uint *)FUN_1008cdf0(param_1,param_2,param_3,param_4,param_5);
      }
    }
    if (uVar1 < 0x1f) {
      if (uVar1 != 0) {
        bVar2 = uVar1 == 0x1c;
        goto LAB_1008f56c;
      }
      param_4 = param_4 + 1;
    }
    else {
      if ((0x1f < uVar1) && (uVar1 != 0x2f)) goto LAB_1008f570;
      param_4 = param_4 + 3;
    }
  } while( true );
}

