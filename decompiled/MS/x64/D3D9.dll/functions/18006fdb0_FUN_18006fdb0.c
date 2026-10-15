/*
 * FUN_18006fdb0 at 18006fdb0
 * undefined __fastcall FUN_18006fdb0(undefined8 param_1, uint * param_2, longlong * param_3, uint * param_4, ulonglong param_5)
 * Address ranges: 18006fdb0-1800700f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006fdb0(undefined8 param_1,uint *param_2,longlong *param_3,uint *param_4,
                  ulonglong param_5)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong local_res20;
  undefined8 local_70;
  uint local_68 [10];
  
  uVar5 = 0;
  puVar4 = param_4;
LAB_18006fddf:
  puVar4 = puVar4 + 1;
LAB_18006fde3:
  do {
    while( true ) {
      if ((longlong)puVar4 - (longlong)param_4 >> 2 !=
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x40) + 0x121c + uVar5 * 4)) break;
      bVar1 = *(byte *)(uVar5 + 0x125c + *(longlong *)(param_2 + 0x40));
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      local_res20 = CONCAT44(local_res20._4_4_,uVar7);
      uVar3 = 0;
      uVar7 = bVar1 & 0xf0;
      if ((bVar1 & 0xf0) == 0) {
LAB_18006ffb9:
        puVar4 = FUN_18006d6a0(param_1,param_2,param_3,puVar4,param_5,0);
LAB_18006ffde:
        uVar7 = param_2[0xd0];
      }
      else {
        if (uVar7 == 0x10) {
          uVar7 = bVar1 & 0xf;
          puVar8 = puVar4;
          puVar9 = local_68;
          for (uVar5 = (ulonglong)uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (puVar4 = puVar4 + uVar7; (short)*puVar4 == -2;
              puVar4 = puVar4 + (ulonglong)*(ushort *)((longlong)puVar4 + 2) + 1) {
          }
          uVar6 = param_1;
          puVar4 = FUN_18006d6a0(param_1,param_2,param_3,puVar4,param_5,0);
          local_70 = *(undefined8 *)(param_2 + 0xd0);
          FUN_18006fbe4(uVar6,param_2,param_3,(uint *)&local_70,param_2[0xd0],param_2[0xcc],
                        param_2[0xcd],'\0');
          FUN_18006d6a0(param_1,param_2,param_3,local_68,param_5,0);
          uVar5 = local_res20 & 0xffffffff;
          goto LAB_18006ffde;
        }
        if (uVar7 != 0x20) goto LAB_18006ffb9;
        local_res20 = CONCAT44(local_res20._4_4_,puVar4[1]);
        uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
        for (puVar4 = FUN_18006d6a0(param_1,param_2,param_3,puVar4,param_5,uVar3);
            (short)*puVar4 == -2; puVar4 = puVar4 + (ulonglong)*(ushort *)((longlong)puVar4 + 2) + 1
            ) {
        }
        uVar6 = param_1;
        puVar4 = FUN_18006d6a0(param_1,param_2,param_3,puVar4,param_5,0);
        local_70 = *(undefined8 *)(param_2 + 0xd0);
        FUN_18006fbe4(uVar6,param_2,param_3,(uint *)&local_70,param_2[0xd0],param_2[0xcc],
                      param_2[0xcd],'\0');
        FUN_18006c6fc(uVar6,(longlong)param_2,(uint)local_res20,0);
        uVar7 = uVar3;
        if (uVar3 == 0) goto LAB_18006ffde;
      }
      local_res20 = *(ulonglong *)(param_2 + 0xd0);
      FUN_18006fbe4((ulonglong)uVar7,param_2,param_3,(uint *)&local_res20,uVar7,param_2[0xcc],
                    param_2[0xcd],uVar3 != 0);
      FUN_1800ec960((longlong)param_2,uVar3);
    }
    sVar2 = (short)*puVar4;
    if (sVar2 == 0) goto LAB_18006fddf;
    if (sVar2 == 0x51) {
      puVar4 = puVar4 + 6;
      goto LAB_18006fde3;
    }
    if (sVar2 == -3) goto LAB_18006fddf;
    if (sVar2 == -2) break;
    if (sVar2 == -1) {
      return;
    }
    uVar6 = param_1;
    puVar4 = FUN_18006d6a0(param_1,param_2,param_3,puVar4,param_5,0);
    local_res20 = *(ulonglong *)(param_2 + 0xd0);
    FUN_18006fbe4(uVar6,param_2,param_3,(uint *)&local_res20,param_2[0xd0],param_2[0xcc],
                  param_2[0xcd],'\0');
  } while( true );
  puVar4 = puVar4 + *(ushort *)((longlong)puVar4 + 2);
  goto LAB_18006fddf;
}

