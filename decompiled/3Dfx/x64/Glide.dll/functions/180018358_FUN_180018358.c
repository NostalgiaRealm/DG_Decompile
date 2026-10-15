/*
 * FUN_180018358 at 180018358
 * undefined __fastcall FUN_180018358(longlong param_1)
 * Address ranges: 180018358-1800185b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018358(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_438 [129];
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_res8[0] = 0;
    local_res10[0] = 0;
    local_res18[0] = 0;
    lVar4 = (**(code **)(param_1 + 0x88))(local_res8,local_res10,local_res18,local_res20);
    if (lVar4 != 0) {
      FUN_1800163c0(param_1,local_438);
      FUN_180016e20(param_1,3,8,1,1,0);
      FUN_180016d20(param_1,3,8,1,1,0,'\0');
      FUN_180016b64(param_1,1,5,4,0);
      FUN_180016acc(param_1,0);
      FUN_180016c20(param_1,7);
      FUN_180017020(param_1,0);
      FUN_180016ef4(param_1,1,0);
      piVar1 = (int *)(param_1 + 0x60);
      if (*(char *)(param_1 + 100) != '\0') {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(char *)((longlong)*(longlong **)(param_1 + 0x18) + 0x113) != '\x02') {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 400))();
          *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x113) = 2;
        }
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      FUN_180016cc8(param_1,0);
      FUN_180016c78(param_1,1);
      if (*(char *)(param_1 + 100) != '\0') {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(char *)((longlong)*(longlong **)(param_1 + 0x18) + 0x13d) != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe0))();
          *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13d) = 0;
        }
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*(char *)(param_1 + 100) != '\0') {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (*(char *)((longlong)*(longlong **)(param_1 + 0x18) + 0x13e) != '@') {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))();
            *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13e) = 0x40;
          }
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
      }
      FUN_180016f68(param_1,0,0,*(int *)(*(longlong *)(param_1 + 0x18) + 0xa8),
                    *(int *)(*(longlong *)(param_1 + 0x18) + 0xac));
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar5 = *(int *)(lVar2 + 0xa8) - local_res8[0];
      uVar3 = *(int *)(lVar2 + 0xac) - local_res10[0];
      uVar6 = 0;
      if (0 < (int)uVar3) {
        uVar6 = uVar3;
      }
      uVar3 = 0;
      if (0 < (int)uVar5) {
        uVar3 = uVar5;
      }
      FUN_1800168c4(param_1,(uint)*(byte *)(lVar2 + 0xf0),uVar3,uVar6,local_res20[0],local_res8[0],
                    local_res10[0],local_res18[0],lVar4,1,1);
      FUN_180016480(param_1,local_438,'\0');
    }
  }
  return;
}

