/*
 * FUN_1005aa2c at 1005aa2c
 * undefined4 __stdcall FUN_1005aa2c(void * param_1, int * param_2)
 * Address ranges: 1005aa2c-1005abc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005aa2c(void *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_7c [16];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar7 = 0;
  local_34 = 0x4e475349;
  local_30 = 0;
  local_2c = 0;
  local_28 = 8;
  FUN_1002d6f1(&local_24,0x210);
  FUN_100a14c1(&local_24,&local_34,0x10);
  FUN_100ada8e(local_7c,0,0x40);
  iVar8 = 0;
  local_8 = 0;
  do {
    if ((*(char *)(uVar7 + 0x10 + param_2[4]) != '\0') &&
       (bVar1 = *(byte *)(uVar7 + param_2[4]), bVar1 != 0xff)) {
      local_c = *param_2;
      uVar9 = 0xffffffff;
      local_14 = bVar1 & 0xf;
      uVar5 = 0;
      local_10 = *(uint *)(local_c + 8);
      iVar8 = local_c;
      if (local_10 != 0) {
        do {
          uVar6 = (uint)*(byte *)(iVar8 + 0x9c + uVar5);
          if (*(byte *)(local_c + 0x19 + uVar6 * 8) == bVar1) {
            iVar8 = *param_2;
            uVar9 = uVar6;
            break;
          }
          iVar8 = *param_2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_10);
      }
      if (uVar9 == 0xffffffff) {
        *(undefined1 *)((int)param_2 + uVar7 + 0xda) = 0xff;
        *(undefined1 *)((int)param_2 + uVar7 + 0xca) = 0xff;
        iVar8 = local_8;
      }
      else {
        cVar2 = *(char *)(iVar8 + 0x1a + uVar9 * 8);
        *(undefined1 *)((int)param_2 + uVar7 + 0xca) = *(undefined1 *)(iVar8 + 0x18 + uVar9 * 8);
        local_2c = uVar7 & 0xff;
        *(char *)((int)param_2 + uVar7 + 0xda) = cVar2;
        local_34 = 0;
        if ((cVar2 == '\0') || (cVar2 == '\x01')) {
LAB_1005ab35:
          local_30 = 3;
        }
        else if (cVar2 == '\x02') {
          local_30 = 1;
        }
        else {
          if ((cVar2 != '\x03') && (cVar2 != '\x04')) goto LAB_1005ab35;
          local_30 = 2;
        }
        iVar8 = param_2[4];
        local_28 = (uint)CONCAT11(*(undefined1 *)(uVar7 + 0x10 + iVar8),0xf);
        local_38 = local_14;
        pbVar3 = (byte *)FUN_1005d644(CONCAT31((int3)((uint)iVar8 >> 8),
                                               *(undefined1 *)(uVar7 + iVar8)));
        local_3c = FUN_100a1552(local_7c,pbVar3);
        iVar8 = local_8 + 1;
        local_8 = iVar8;
        FUN_100a14c1(&local_24,&local_3c,0x18);
      }
    }
    uVar7 = uVar7 + 1;
    if (0xf < uVar7) {
      FUN_100a1690((int *)&local_24,iVar8,local_7c);
      FUN_100a14c1(param_1,local_24,local_20 - (int)local_24);
      uVar4 = thunk_FUN_100ad48c(local_24);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  } while( true );
}

