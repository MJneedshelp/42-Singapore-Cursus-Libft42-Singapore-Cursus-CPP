# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 03:15:27 by mintan            #+#    #+#              #
#    Updated: 2025/07/09 13:08:36 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags + dependency flags
CXX = c++
CXX_FLAGS = -Wall -Werror -Wextra
STD_FLAG = -std=c++98
DEP_FLAGS = -MMD -MP

# Target Executable
NAME = theoffice

# Source, Object and Dependency (headers) files
SRC_NAMES = main
SRCS = $(addsuffix .cpp, $(SRC_NAMES))
OBJ = $(SRCS:.cpp=.o)
DEP = $(OBJ:.o=.d)

# Target to make using Make all
all: $(NAME) print_art

# Generate the mandatory programme by compiling the objects + track header
# dependencies
$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@

-include $(DEP)

# Generate all the .o files from the .c files for the programme
%.o: %.cpp
	$(CXX) $(CXX_FLAGS) $(STD_FLAG) $(DEP_FLAGS) -c $< -o $@

# Clear the build files
clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

# Rule to rebuild the target
re:	fclean all

# Phony targets
.PHONY: all clean re fclean

print_art:
	@echo"                           `/+o/."
	@echo"                       .+sso+/:oydyo/:-:+shdys/    `-:.     `-/+o+/`"
	@echo"                 `/sdh+/::/::ss:`ymdhyso//hmMNyhNNms+ososys+/-:/shms/`"
	@echo"                .+hNNy++oo+/.`.--/osyhdmNNMMMMMMMMMNdsssssoso+hhhhsoo+ymdo."
	@echo"              -smNy/+ymmmmmNNNNMNMMMMMNNNmmNMMMMMMMMMho:///:--shydNMMNdo-sNs`"
	@echo"            -hNd+-sNMNdmNMMMNNNMNNNMMMddNMMNNmNMMMMMMNmy+///::/:-:/++ymNNdmMN:"
	@echo"          `sNMs`+NMNNNMMMMNNNMMMMMMNmhyso///+ohMmoNMmoo+/::/-:oymNNmsosshdhmMM/"
	@echo"         +NMMy`hMMMhyNMNMMNNNMds:-.`-:syddmNMMmyo`+yMMho:..-+//++omMNNNNNNNmdNMs"
	@echo"       :mMMMh`yMNdodNNNMNMMMs.+sdmmmmmdhNMMMNhy/..`-syhNmdyssso+/.`:yNMMMMNMNMMMy"
	@echo"      :NMNh:-+MMh+mdNNNNNMd.+NNMMMMMMMMmho:-......:--::ohNMMMMMMNmNy/.oNMNmNMNMMMs"
	@echo"     :NMm+/dmmMNydyhNdhMMN.yMMNmhysso+:-``        ```.--:/+sdMMMMMNNNm:-mMNNNNMMMMy"
	@echo"    :NMy/hNMMMMmNddsh/NmMy-Mms:..`.--.`                ``..-.:yNMMMMNMNs:NMMMNNNNMMy"
	@echo"   :NNy/mMMMMMMmNMMshsNdMo/d-...``                       ```...-yMMMNNMd`NMMNMdmoNMM-"
	@echo"  /mMm+NMNNMMNMNNNNNNNNMMmom/                              ```..`+NMMMMh`NMMMMNNdhNMh"
	@echo" +NMMmmMNyNMNMMMMMNmmmNMdNNyh+.                             ``````/NMMM::MMMMNMNNmNMN"
	@echo"+MNNMMMNymMNNMMMNNNNNMh+:+dNmddhyoo+`                        ````.`sMMN`sMNNMNNMNNNNN"
	@echo"dNNNMNNddMNNNNNNmymMN+---::/shdhyyy:                         `````..hMo.NMNMNMMMNmMMd"
	@echo"dNNNMMNmNNNmmNMNdNMM+.-..----.-:::.                          ````...:mh/NMMMNMMMNNMMh"
	@echo"sMNNMMNMNNmyNMNdmNMo--.....                                  ``...---:dNMNMMNMMNNNMMN."
	@echo":NNNMMMNNNsmMNmMNMy...`.-.`                                    `.-----:odNmmNMMMMMNMMo"
	@echo".NMMMmMMMNmMNNNNMm:-.```..                                       ``-----:/o//dMMMNMMMm"
	@echo".NMMMNMMNMMNMNNNNs--.``...                                         `....---..dMNMMMMM`"
	@echo".NNMMNNNNNMMMNNNN:-...`...                                          ```.....`+MMMMMMM."
	@echo".MNNNNNNNMMMMMNNy.......-.`                                         ``..---.`.NMMMMMM`"
	@echo"`NMNMMNNNMMNMMMm-...`.-----.`                                        ``.-----.`yMMMMMd"
	@echo" dMMMNNNNMMNNMMo`-....----..`          ``                      `.`` ```.------`:MMMMM-"
	@echo" /MMNMNNNMMNMMN-`.`..-.--.` `--..-:-.-.``..``               ```.-......--.----..NMMMd"
	@echo" `mMNMNNMMMNNMN.``...-.-../hddyysyhysyyso+--/::-..--...----:::+syyyyhhdddy+:-.-.hMMM:"
	@echo"  :NNNNNNMMMMMN.`....--.:dy/:-.-/+++ososss+/:+shyo/::/:+os+:+syosyoso+/://ss//.`+MMm"
	@echo"   +MdmNNMNMMMN+.--....:+-.-:+ooymdddmdhyo++ss+/yMo.`..oNsyhdhmdmmmmNmdo:-.--:+-:MM/"
	@echo"  `y/..-+dNNMMMo-shhyo++--+sso-`dsymoso.smyso+//.od+/:/ho+yyhd/ymsNhyy./yy/``.-hhmm`"
	@echo"  .s+md+- oMMMm``.-/sy//-.+/s.  odys+s-  /shyso+.sm+:::yd/hh+:`.hyyhy- `/y/.` `hs/s`"
	@echo"  -oyMNyhs:NMMo     `.-`         .---` ``.`/::+s/ms````-mo+:`````.--` ````     `sNm`"
	@echo"  `hsMh`.hymMM:       `-         `          .:+:hy`     od:-`                  .+sM-``"
	@echo"   o+o/``-/mMM-        .-                ``.```hy`       s.`.`                 -/+M+``"
	@echo"   .s `./NMMMM-         --            ````  `:ho`        .s`  ```             ./.+My`"
	@echo"    /: `+MMdMM/          -.  `       `   ..+++-           :d/.             ``:o-`oMy"
	@echo"     o. .sdNMMm`            `--:://+//.`-///:.           `.ohooo:-.`` `.-:+//:..`hMy"
	@echo"     `s```.yMMMs                  ```     .y+  `::.:----.-``o:-::/:::--:::-----..mMo"
	@echo"      :s` `oMNMN-                         :N+  -NNhy/:/sds./:..----------------`/MN"
	@echo"        +o``-NMNMd`                      `-syyoo++/.++:so/+yN+..--....-..-....--`dM+"
	@echo"        +:.`oMNNN`                     .:-` `.::.` `--..---/+/---.```........-.:d:"
	@echo"         ./++Ny::`                   `--`          .--..-----::-..```......---.s."
	@echo"           `:os.--`                  .`            `.. ``.------.`.```..-----.:o"
	@echo"             `h-..`                 ``        .:syy/-/ydho-.--...`````.------.+."
	@echo"              +o`.`                        ./ymNNNNNNNmmNNNh:....``.```.-----:s"
	@echo"              `h-`.                    -/+oyo/:----:---.--:+sso:........--::-+:"
	@echo"               /d...                 `.++:  -:--/+:/oo+o++-.``--.....-----:-:y"
	@echo"               `Md:.`                ``     `-:/+ooooo+/-........-----------yo"
	@echo"                mNNs-`                     `..-/oo+://:/oo:......----------os"
	@echo"                h:+md:.                  ...``.`         `------.---------++"
	@echo"               `h..-+ddo.`                            ``.----------------s:"
	@echo"                h` .--/ydy:`                   `...--------------------+y."
	@echo"                h`   ..--+yds+.`               `....----------------:+dN`"
	@echo"               `y      `.-.-:sdhs:.`    `...````..----------------:smsdm"
	@echo"               `h         .--..-+ymdy+/:----:----------------.-/shs+.`os"
	@echo"               `h           `..--..:sdmmhyo/::----------::/+syhy/....`+-"
	@echo"               -y              `..--..--/oosyyyhhhyyyssoooo/:.`...`.` /-"
	@echo"               `.                  `..--.......................````   +`"
	@echo"                                      `...------..-.........``"
	@echo"                                          ``..-.--........``"
	@echo"                                               ```..```"
