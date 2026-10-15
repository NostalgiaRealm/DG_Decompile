/*
 * FUN_1800f58b8 at 1800f58b8
 * undefined FUN_1800f58b8(void)
 * Address ranges: 1800f58b8-1800f5a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1800f58b8(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong local_230 [65];
  ulonglong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  local_28 = param_4;
  uStack_20 = param_5;
  local_18 = param_6;
  uStack_10 = param_7;
  local_8 = param_8;
  puVar5 = &local_28;
  if (param_3 < 0) {
    puVar5 = &uStack_20;
    local_230[0] = param_4 & 0xffffffff;
  }
  uVar3 = (ulonglong)(param_3 < 0);
  puVar1 = (uint *)*puVar5;
  uVar4 = 0xffffffff;
  do {
    if (puVar1 == (uint *)0x0) {
      local_230[uVar3] = 0;
      FUN_1800f4a38();
      return;
    }
    puVar5 = puVar5 + 1;
    if (puVar1 != (uint *)0xffffffffffffffff) {
      if (((ulonglong)puVar1 & 0xffffffffffff0000) == 0) {
        uVar4 = (ulonglong)puVar1 & 0xffff;
      }
      else {
        if (*puVar1 != 0) {
          local_230[uVar3] = (ulonglong)*puVar1;
          iVar2 = (int)uVar3;
          uVar6 = iVar2 + 1;
          if (*puVar1 != 0xffffffff) {
            if ((int)uVar4 == -1) {
              uVar4 = (ulonglong)(byte)puVar1[1];
            }
            local_230[uVar6] = uVar4;
            local_230[iVar2 + 2] = (ulonglong)puVar1[4];
            local_230[iVar2 + 3] = (ulonglong)puVar1[5];
            local_230[iVar2 + 4] = (ulonglong)puVar1[6];
            local_230[iVar2 + 5] = (ulonglong)puVar1[7];
            uVar6 = iVar2 + 6;
            if ((*puVar1 >> 0x1e & 1) != 0) {
              local_230[uVar6] = (ulonglong)puVar1[8];
              uVar3 = (ulonglong)(iVar2 + 8);
              local_230[iVar2 + 7] = (ulonglong)(byte)puVar1[9];
              goto LAB_1800f59dc;
            }
          }
          uVar3 = (ulonglong)uVar6;
        }
LAB_1800f59dc:
        uVar4 = 0xffffffff;
      }
    }
    puVar1 = (uint *)*puVar5;
  } while( true );
}

