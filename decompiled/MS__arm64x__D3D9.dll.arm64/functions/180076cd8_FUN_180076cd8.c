/*
 * FUN_180076cd8 at 180076cd8
 * undefined FUN_180076cd8(void)
 * Address ranges: 180076cd8-180076f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180076cd8(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffa8;
  
  lVar8 = param_2 + 0x1c0;
  uVar6 = 0;
  do {
    uVar2 = uVar6 | 0x410200;
    if (param_4 != 0xffffffff) {
      uVar2 = uVar6 | param_4 << 0xe | 0x420300;
    }
    *(uint *)(lVar8 + (ulonglong)uVar6 * 4) = uVar2;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xf);
  cVar3 = *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c);
  if (cVar3 == '\x01') {
    uVar4 = FUN_1800f42d0(param_2 + 0x20,4,1);
    *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1cc);
    uVar6 = 0;
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_2 + 0x1fc) = uVar4;
    *(undefined4 *)(param_2 + 0x200) = *(undefined4 *)(param_2 + 0x1d0);
    do {
      *(undefined4 *)(param_2 + 0x210 + (ulonglong)uVar6 * 4) =
           *(undefined4 *)(lVar8 + (ulonglong)(uVar6 + 5) * 4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  else if (cVar3 == '\x02') {
    FUN_18006eec0(param_1,param_2);
  }
  else if (cVar3 == '\x03') {
    puVar1 = (undefined8 *)(param_2 + 0x280);
    *(undefined8 *)(param_2 + 0x288) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x298) = 0;
    *(undefined8 *)(param_2 + 0x290) = 0;
    *(undefined8 *)(param_2 + 0x2a8) = 0;
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    *(undefined4 *)(param_2 + 0x2b0) = 0;
    if ((*(char *)(*(longlong *)(param_2 + 0x10) + 0x4885) != '\0') && (param_4 == 0xffffffff)) {
      param_4 = *(uint *)(param_2 + 0x70);
      *(undefined4 *)(param_2 + (ulonglong)param_4 * 4 + 0x60) = 0xd;
      *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
    }
    lVar8 = 0;
    do {
      uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      cVar3 = *(char *)(lVar8 + *(longlong *)(param_2 + 0x18));
      uVar7 = (ulonglong)cVar3;
      if (cVar3 < -1) {
LAB_180076db8:
        uVar6 = (uint)uVar7;
        if (-1 < (int)uVar6) {
          if ((int)uVar6 < 1) goto LAB_180076e70;
          if (param_4 == 0xffffffff) {
            param_1 = FUN_1800f42d0(param_2 + 0x20,4,1);
            uVar6 = (uint)param_1;
          }
          else {
            uVar6 = uVar6 | param_4 << 0xe | 0x420300;
          }
          *(uint *)((longlong)puVar1 + (longlong)(int)uVar7 * 4) = uVar6;
          puVar5 = (undefined4 *)FUN_18006e680(param_1,uVar7 & 0xffffffff);
          if (*(uint *)(param_2 + 0x230) == 0) {
            in_stack_ffffffffffffffa8 = 0;
            param_1 = FUN_1800f5730(param_2 + 0x20,param_3,0x36);
          }
          else {
            in_stack_ffffffffffffffa8 = CONCAT44(uVar4,puVar5[2]);
            param_1 = FUN_1800f5730(param_2 + 0x20,param_3,0x36,uVar6 | 0x40000000,0xf,
                                    *(uint *)(param_2 + 0x230) | 0x10000000,
                                    *(undefined1 *)(param_2 + 0x234),*(undefined4 *)(param_2 + 0xbc)
                                    ,0xe4,*puVar5,puVar5[1],in_stack_ffffffffffffffa8,puVar5[3],0);
          }
        }
      }
      else {
        if (-1 < cVar3) {
          uVar7 = (ulonglong)((int)cVar3 + 2);
          goto LAB_180076db8;
        }
LAB_180076e70:
        param_1 = FUN_1800f42d0(param_2 + 0x20,4,1);
        *(int *)puVar1 = (int)param_1;
        uVar6 = 0;
        if (param_4 != 0xffffffff) {
          uVar6 = param_4 << 0xe | 0x420300;
        }
        *(uint *)(param_2 + 0x27c) = uVar6;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xc);
  }
  return;
}

