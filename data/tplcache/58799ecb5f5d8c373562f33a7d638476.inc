<li class="am-parent">
                <a href="{dede:field name='typeurl'/}" class="">{dede:field name='typename'/}</a>
                <ul class="am-menu-sub am-collapse  am-avg-sm-3 ">
                  {dede:channel type=son noself=yes}
                    <li class="">
                      <a href="[field:typelink/]" class="">[field:typename/]</a>
                    </li>
                  {/dede:channel}
                </ul>
              </li>